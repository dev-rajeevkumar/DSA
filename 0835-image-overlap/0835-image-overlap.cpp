class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
    int n=img1.size();
    int ans=0;
    //up left
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int c=0;
            for(int k=i;k<n;k++){
                for(int l=j;l<n;l++){
                    if(img1[k-i][l-j]==1 && img2[k][l]==1)c++;
                }
            }
            ans=max(ans,c);
        }
    }
    //right down
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int c=0;
            for(int k=i;k<n;k++){
                for(int l=j;l<n;l++){
                    if(img1[k][l]==1 && img2[k-i][l-j]==1)c++;
                }
            }
            ans=max(ans,c);
        }
    }
    for(int i=0;i<n;i++){
        int a=0,b=n-1;
        while(a<b){
            swap(img1[i][a],img1[i][b]);
            swap(img2[i][a],img2[i][b]);
            a++;
            b--;
        }
    }
    //up left
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int c=0;
            for(int k=i;k<n;k++){
                for(int l=j;l<n;l++){
                    if(img1[k-i][l-j]==1 && img2[k][l]==1)c++;
                }
            }
            ans=max(ans,c);
        }
    }
    //right down
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int c=0;
            for(int k=i;k<n;k++){
                for(int l=j;l<n;l++){
                    if(img1[k][l]==1 && img2[k-i][l-j]==1)c++;
                }
            }
            ans=max(ans,c);
        }
    }
    return ans;
    }
};

    // for(int i=n-1;i>=0;i--){
    //     for(int j=n-1;j>=0;j--){
    //         int c=0;
    //         for(int k=0;k<n;k++){
    //             for(int l=0;l<n;l++){
    //                 if(img1[k][l]==1 && img2[k][l]==1)c++;
    //             }
    //         }
    //         ans=max(ans,c);
    //     }
    // }
    // for(int i=n-1;i>=0;i--){
    //     for(int j=n-1;j>=0;j--){
    //         int c=0;
    //         for(int k=0;k<n;k++){
    //             for(int l=0;l<n;l++){
    //                 if(img1[k][l]==1 && img2[k][l]==1)c++;
    //             }
    //         }
    //         ans=max(ans,c);
    //     }
    // }
