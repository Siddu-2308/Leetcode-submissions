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
        // Create a dummy node to handle edge cases like removing the head node
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // 1. Advance 'fast' pointer so that 'fast' and 'slow' are n nodes apart
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // 2. Move both pointers until 'fast' reaches the last node
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // 3. 'slow->next' is the N-th node from the end; bypass it
        ListNode* nodeToDelete = slow->next;
        slow->next = nodeToDelete->next;
        delete nodeToDelete; // Free memory

        // 4. Return the actual head (dummy->next)
        ListNode* newHead = dummy->next;
        delete dummy; // Clean up dummy node
        return newHead;

    }
};