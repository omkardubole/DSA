class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int sum = 0;
        int carry = 0;

        ListNode* ans = new ListNode();
        ListNode* start = ans;

        while(l1 != NULL || l2 != NULL) {

            if(l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            ans->val = sum % 10;
            carry = sum / 10;

            if(l1 != NULL || l2 != NULL || carry != 0) {
                ListNode* newNode = new ListNode(carry);

                ans->next = newNode;
                ans = newNode;
            }

            sum = carry;
        }

        return start;
    }
};