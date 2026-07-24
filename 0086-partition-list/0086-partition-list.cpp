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
        if (head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* dummySmall = new ListNode(-1);
        ListNode* dummyLargeEqual = new ListNode(-1);
        ListNode* curr = head;
        ListNode* endS = dummySmall;
        ListNode* endL = dummyLargeEqual;
        
        while(curr != NULL){
            if(curr-> val < x){
                endS-> next = curr;
                endS = curr;
            }else{
                endL -> next = curr;
                endL = curr;
            }
            curr = curr-> next;
        }
        
        if(endL){
            endL-> next = NULL;
        }if(endS){
            endS -> next = NULL;
        }
        endS -> next = dummyLargeEqual -> next;
        return dummySmall-> next;
    }
};