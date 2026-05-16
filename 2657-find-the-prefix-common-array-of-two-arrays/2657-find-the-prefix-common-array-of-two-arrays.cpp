class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> count;
        int n=A.size();
        for(int i=0;i<n;i++){
            int f=0;
            for(int j=0;j<=i;j++){
                for(int k=0;k<=i;k++){
                    if(A[j]==B[k]){
                        f++;
                        break;
                    }
                }
            }
            count.push_back(f);
        }
        return count;
    }
};