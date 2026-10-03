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
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL) {

            // Current node ke next node ka address save kar rahe hain
            // kyuki curr->next ko ab hum change karne wale hain
            ListNode* next = curr->next;

            // Current node ka arrow reverse karo
            // Example: 1 -> 2  becomes  1 -> NULL
            curr->next = prev;

            // prev ko current node par le aao
            prev = curr;

            // curr ko original next node par le jao
            curr = next;
        }

        // prev ab reversed list ka first node hai
        return prev;
    }
};