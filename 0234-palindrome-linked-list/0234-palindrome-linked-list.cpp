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
    bool isPalindrome(ListNode* head) {
        //find middle node
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            fast= fast->next->next;
            slow = slow->next;
        }
 // 2. Reverse second half
ListNode * prev = NULL;
ListNode* curr = slow;

while(curr!=NULL){
    ListNode * next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}

//check pallindrome

ListNode *left =head;
ListNode * right = prev;

    
while(right!=NULL){
    if(left->val!=right->val){

        return false;
    }
    left = left->next;
    right = right->next;
}


return true;
    }
};