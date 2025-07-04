/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        if(headA==NULL || headB==NULL) return NULL; // agar koi bhi ek null hua to intersection not possible
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
            //dono traverse kara ke checking if they are same or not
            if(tempA==tempB) return tempA;
            if(tempA==NULL) tempA=headB;
            if(tempB==NULL) tempB=headA;
        }
        return tempA;
    }
};