class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        vector<int>arr1;
        while(t1!=NULL){
            arr1.push_back(t1->val);
            t1=t1->next;
        }
        ListNode* t2=l2;
        vector<int>arr2;
        while(t2!=NULL){
            arr2.push_back(t2->val);
            t2=t2->next;
        }
        vector<int>ans;
        int c=0;
        int n1=arr1.size();
        int n2=arr2.size();
        for(int i=0;i<min(n1,n2);i++){
            ans.push_back((arr1[i]+arr2[i]+c)%10);
            c=(arr1[i]+arr2[i]+c)/10;
        }
        if(n2>n1){
            for(int i=n1;i<n2;i++){
            ans.push_back((arr2[i]+c)%10);
            c=(arr2[i]+c)/10;
        }
        }
        if(n1>n2){
            for(int i=n2;i<n1;i++){
            ans.push_back((arr1[i]+c)%10);
            c=(arr1[i]+c)/10;
        }
        }
        if(c>0)ans.push_back(c);
        t1 = l1;
        ListNode* prev = NULL;
        for(int j=0;j<ans.size();j++){
            if(t1==NULL){
                prev->next = new ListNode(ans[j]);
                t1 = prev->next;
            }
            else{
                t1->val = ans[j];
            }
            prev = t1;
            t1 = t1->next;
        }
        return l1;
    }
};