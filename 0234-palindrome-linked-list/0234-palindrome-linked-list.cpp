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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next; // Save next node
            curr->next = prev;               // Reverse link
            prev = curr;                     // Move prev forward
            curr = nextNode;                 // Move curr forward
        }

        return prev; // New head
    }
    bool isPalindrome(ListNode* head) {
            //         Find the middle using slow/fast pointers.
            // Reverse the second half.
            // Compare nodes from the head and the head of the reversed half.
            // (Optional) Reverse the second half again to restore the original list.
            ListNode *slow=head;
            ListNode *fast=head->next;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
            ListNode *rev=reverse(slow->next);
            slow->next=NULL;
            while(rev!=NULL){
                if(head->val!=rev->val){
                        return false;
                }
                head=head->next;
                rev=rev->next;
            }
            return true;
    }
};