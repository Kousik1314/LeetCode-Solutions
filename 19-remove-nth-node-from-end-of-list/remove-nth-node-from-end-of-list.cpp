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
        int len=0;
        ListNode* temp=head;
        //length
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        //ek hi node ho to
        if(n==len){
            head=head->next;
            return head;
        }
        //nth node from starting
        int m=(len-n)+1;
        //index of nth node node to be deleted
        int idx=m-1;
        //piche temp kahi aur gya tha
        temp=head;
        //idx ke pichla delete karenge 
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};