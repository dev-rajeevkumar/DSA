class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> nums;
        while(head!=NULL){
            nums.push_back(head->val);
            head=head->next;
        }
        vector<int> points;
        for(int i=1;i<nums.size()-1;i++){
            if((nums[i]<nums[i-1] && nums[i]<nums[i+1])||(nums[i]>nums[i-1] && nums[i]>nums[i+1])){
                points.push_back(i);
            }
        }
        if(points.size()<2)return {-1,-1};
        sort(points.begin(),points.end());
        int a=INT_MAX;
        int b=points.back()-points[0];
        for(int i=1;i<points.size();i++){
            a=min(a,points[i]-points[i-1]);
        }
        return {a,b};
    }
};