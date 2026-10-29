class Solution {
public:
    vector<vector<int>> adj, up;
    vector<int> tin, tout, depth, bit;
    int timer, LOG;
    int mask(char c) {
        return 1 << (c - 'a');
    }
    void dfs(int u, int p) {
        tin[u] = ++timer;
        up[0][u] = p;
        for(int i = 1; i < LOG; i++)
            up[i][u] = up[i-1][up[i-1][u]];
        for(int v : adj[u]) {
            if(v == p) continue;
            depth[v] = depth[u] + 1;
            dfs(v, u);
        }
        tout[u] = timer;
    }
    void update(int i, int val, int n) {
        while(i <= n) {
            bit[i] ^= val;
            i += i & -i;
        }
    }
    int query(int i) {
        int ans = 0;
        while(i > 0) {
            ans ^= bit[i];
            i -= i & -i;
        }
        return ans;
    }
    int lca(int u, int v) {
        if(depth[u] < depth[v]) swap(u, v);
        int diff = depth[u] - depth[v];

        for(int i = 0; i < LOG; i++)
            if(diff & (1 << i)) u = up[i][u];

        if(u == v) return u;
        for(int i = LOG-1; i >= 0; i--) {
            if(up[i][u] != up[i][v]) {
                u = up[i][u];
                v = up[i][v];
            }
        }
        return up[0][u];
    }
    vector<bool> palindromePath(int n, vector<vector<int>>& edges, string s, vector<string>& queries) {
        adj.resize(n);
        tin.resize(n);
        tout.resize(n);
        depth.assign(n, 0);
        timer = 0;
        LOG = 1;
        while((1 << LOG) <= n) LOG++;
        up.assign(LOG, vector<int>(n, 0));
        bit.assign(n+2, 0);
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0], v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(0, 0);
        for(int u = 0; u < n; u++) {
            update(tin[u], mask(s[u]), n);
            update(tout[u]+1, mask(s[u]), n);
        }
        vector<bool> ans;
        for(int i = 0; i < queries.size(); i++) {
            string q = queries[i];
            stringstream ss(q);
            string op;
            int u, v;
            ss >> op >> u;
            if(op == "update") {
                char c;
                ss >> c;
                update(tin[u], mask(s[u]) ^ mask(c), n);
                update(tout[u]+1, mask(s[u]) ^ mask(c), n);
                s[u] = c;
            } else {
                ss >> v;
                int w = lca(u, v);
                int x = query(tin[u]) ^ query(tin[v]) ^ mask(s[w]);
                ans.push_back((x & (x-1)) == 0);
            }
        }
        return ans;
    }
};