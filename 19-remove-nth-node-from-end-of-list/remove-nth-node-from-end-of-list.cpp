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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;
        //traverse f to n+1 steps
        for(int i=1;i<=n+1;i++){
            //agar ek hi node ho
            if(fast==NULL) return head->next;
            fast=fast->next;
        }
        //move slow and fast at same pace
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        //now slow pointer is exactly at nth node
        slow->next=slow->next->next;
        return head;
    }
};