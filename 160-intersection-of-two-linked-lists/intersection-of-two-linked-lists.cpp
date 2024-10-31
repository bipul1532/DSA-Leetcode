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
    ListNode* collisionFound(ListNode* smallerHead,ListNode* largerHead,int d){
        while(d){
            d--;
            largerHead=largerHead->next;
        }
        while(smallerHead!=largerHead){
            smallerHead=smallerHead->next;
            largerHead=largerHead->next;
        }
        return smallerHead;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1=headA;
        int n1=0;
        ListNode* t2=headB;
        int n2=0;
        while(t1!=NULL){
            n1++;
            t1=t1->next;
        }
        while(t2!=NULL){
            n2++;
            t2=t2->next;
        }
        if(n1<n2){
            return collisionFound(headA,headB,n2-n1);
        }else{
            return collisionFound(headB,headA,n1-n2);
        }
        return nullptr;
    }
};