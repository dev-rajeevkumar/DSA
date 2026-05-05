/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotate(ListNode* head){
        ListNode* prev =NULL;
        ListNode* temp=head;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        temp->next=head;
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL||head->next==NULL){
        return head;
        }
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        k=k%count;
        while(k!=0){
            head=rotate(head);
            k--;
        }
    return head;
    }
};