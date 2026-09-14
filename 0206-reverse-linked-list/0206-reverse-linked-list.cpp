class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        vector<int> temp;

        ListNode* move = head;

        while (move != NULL) {
            temp.push_back(move->val);
            move = move->next;
        }

        ListNode* m = head;

        int i = temp.size() - 1;

        while (i >= 0) {
            m->val = temp[i];
            m = m->next;
            i--;
        }

        return head;
    }
};