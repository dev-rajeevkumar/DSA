class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        string s="";
        for(int i=0;i<chunks.size();i++){
            s+=chunks[i];
        }
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='-'){
                if(i>0&&i<n-1&&islower(s[i-1]) && islower(s[i+1]))
                    continue;
                else
                    s[i]=' ';
            }
        }
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss>>word){
            words.push_back(word);
        }
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            ans.push_back(mp[queries[i]]);
        }
        return ans;
    }
};