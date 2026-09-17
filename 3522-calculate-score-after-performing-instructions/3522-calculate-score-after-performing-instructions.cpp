class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        long long ans=0;
        int n=values.size();
        int i=0;
        while(0<=i && i<n){
            if(instructions[i]=="visited")break;
            if(instructions[i]=="add"){
                ans+=values[i];
                instructions[i]="visited";
                i++;
                continue;
            }
            if(instructions[i]=="jump"){
                instructions[i]="visited";
                if(values[i]==0)break;
                i=i+values[i];
            }
        }
        return ans;
    }
};