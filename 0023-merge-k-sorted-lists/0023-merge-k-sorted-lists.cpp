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

    private:
    struct compare{
        bool operator()(ListNode*a, ListNode*b){
            return a->val > b->val;
        }
    };
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;

        //first node of every list
        for(auto head : lists){
            if(head!=NULL){
                pq.push(head);
            }
        }


        ListNode * dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while(!pq.empty()){
            ListNode* node = pq.top();
            pq.pop();

            tail->next = node;
            tail = tail->next;

            //Add next node from the same list
            if(node->next !=NULL){
                pq.push(node->next);
            }

        }

        return dummy->next;
    }


    
    
};