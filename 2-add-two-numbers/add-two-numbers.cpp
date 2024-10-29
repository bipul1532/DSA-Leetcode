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
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        ListNode* DummyNode =new ListNode(-1);
        ListNode* current=DummyNode;
        int carry=0;
        while(head1!=nullptr || head2!=nullptr){
            int sum=carry;
            if(head1) sum=sum+head1->val;
            if(head2) sum=sum+head2->val;

            ListNode* newNode=new ListNode(sum%10);
            
            current->next=newNode;
            current=current->next;
            carry=sum/10;
            if(head1) head1=head1->next;
            if(head2) head2=head2->next;
        }
        if(carry){
            ListNode* newNode =new ListNode(carry);
            current->next=newNode;
        }
        return DummyNode->next;
    }
};