class Solution {
public:
    ListNode* reverseList(ListNode* head) {

      // prev = null
      //curr - head
      //next = curr->next


      ListNode * prev = NULL;
      ListNode * curr = head;
      
      while(curr!=NULL){
        ListNode * next = curr->next;

        curr->next =prev;
        
        prev = curr;
        curr =next;
      }
return prev;
       
    }
};