
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        // 1. Find the length of linked list
        ListNode* curr = head;
        int L = 0;

        while(curr != NULL) {
            L++;
            curr = curr->next;
        }

        int eachBucketNodes = L / k;
        int extraNodes = L % k;

        vector<ListNode*> result(k, NULL);

        curr = head;
        ListNode* prev = NULL;

        for(int i = 0; i < k; i++) {

            result[i] = curr;

            for(int j = 1;
                j <= eachBucketNodes + (extraNodes > 0 ? 1 : 0);
                j++) {

                prev = curr;
                curr = curr->next;
            }

            if(prev != NULL) {
                prev->next = NULL;
            }

            extraNodes--;
        }

        return result;
    }
};

