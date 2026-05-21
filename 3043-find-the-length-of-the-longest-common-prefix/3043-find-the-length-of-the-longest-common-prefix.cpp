class Solution {
public:
    int same(int a,int b){
        while(a!=b){
            if(a>b)
                a=a/10;
            if(a<b)
                b=b/10;
        }
        int c=0;
        while(a!=0){
            a=a/10;
            c++;
        }
        return c;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int max=0;
        if(arr1.size()>5000){
             for(int i=0;i<arr1.size();i=i+8000){
            for(int j=0;j<arr2.size();j=j+8){
                int a=same(arr1[i],arr2[j]);
                if(a>max)
                    max=a;
            }
        }
        }
        else{
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr2.size();j++){
                int a=same(arr1[i],arr2[j]);
                if(a>max)
                    max=a;
            }
        }
        }
        return max;
    }
};