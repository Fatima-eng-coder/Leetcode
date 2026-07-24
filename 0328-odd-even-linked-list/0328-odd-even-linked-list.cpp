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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head-> next == NULL){
            return head;
        }
        ListNode* oddStrt = NULL;
        ListNode* evenStrt = NULL;
        ListNode* oddEnd = NULL;
        ListNode* evenEnd = NULL;
        ListNode* curr = head;
        bool even = false;

        while(curr != NULL){
            if(even == false ){
                if(oddStrt == NULL){
                    oddStrt = oddEnd = curr;
                    
                }else{
                    oddEnd-> next = curr;
                    oddEnd = curr;
                    
                }
            }else{
                if(evenStrt == NULL){
                    evenStrt = evenEnd = curr;
                    
                } else{
                    evenEnd -> next = curr;
                    evenEnd = curr;
                    
                }
            }
            even = !even;
            curr = curr -> next;
        }
        if(evenEnd){
            evenEnd-> next = NULL;
        }
        oddEnd -> next = evenStrt;
        return oddStrt;
    }
};