class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        while (cur && cur->next) {
            if (cur->val == cur->next->val) {
                ListNode* dup = cur->next;
                cur->next = dup->next;   // skip the duplicate
                delete dup;              // free it (optional on LeetCode)
            } else {
                cur = cur->next;         // advance only when no duplicate
            }
        }
        return head;
    }
};