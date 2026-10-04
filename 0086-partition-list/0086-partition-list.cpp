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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);
        ListNode* smallPointer = small;
        ListNode* largePointer = large;

        while(head != NULL) {
            if(head -> val < x) {
                smallPointer -> next = head;
                smallPointer = smallPointer -> next;
            } else {
                largePointer -> next = head;
                largePointer = largePointer -> next;
            }
            head = head -> next;
        }

        smallPointer -> next = large -> next;
        largePointer -> next = NULL;

        return small -> next;

    }
};