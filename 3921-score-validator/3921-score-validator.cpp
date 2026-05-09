class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0,count=0;
        for(int i=0;i<events.size();i++){
            if(count>=10)
                break;
            string a=events[i];
            if(a=="1"||a=="2"||a=="3"||a=="4"||a=="6")
                score=score+stoi(events[i]);
            else if(a=="WD"||a=="NB")
                score++;
            else if(a=="W")
                count++;
        }
        return {score,count};
    }
};