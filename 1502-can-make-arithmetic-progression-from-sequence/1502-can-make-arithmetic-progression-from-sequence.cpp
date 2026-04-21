class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        for(int i=0;i<n-2;i++){
            if(abs(arr[i]-arr[i+1])!=abs(arr[i+1]-arr[i+2]))
                return false;
        }
        return true;
    }
};