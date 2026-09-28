
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;

        long long ans = 0;

        while (temp != nullptr) {
            ans = ans * 2 + temp->val;

            temp = temp->next;
        }
        return ans;
    }
};