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
    ListNode* rev(ListNode *head){
        ListNode* prev=nullptr;
        ListNode * curr=head;
        while(curr!=NULL){
            ListNode * h=curr->next;//save next node
            curr->next=prev;//change link
            prev=curr;//update prev
            curr=h;//update curr
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *r=rev(slow->next);
        slow->next=NULL;
        int ma=0;
        while(r!=NULL && head!=NULL){
            int sum=r->val + head->val;
            ma=max(ma,sum) ;
            r=r->next;
            head=head->next;
        }
        return ma;
    }
};