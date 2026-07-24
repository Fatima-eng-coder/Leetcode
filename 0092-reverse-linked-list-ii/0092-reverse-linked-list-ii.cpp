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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || left == right){
            return head;
        }

        int position = 1;
        ListNode* curr = head;
        ListNode* beforeL = NULL;

        while(position < left){
            beforeL = curr;
            curr = curr-> next; 
            position++;
        }
        //when this loop end then position = left and curr has node present at left index

        ListNode* prev = NULL;
        ListNode* next = NULL;
        ListNode* reverseT = curr;

        while(position <= right){
            //reverse
            next = curr -> next; 
            curr -> next = prev;
            prev = curr;  // last iteration reverse head
            curr = next; // after tail

            position++;
        }
        if(beforeL){
            beforeL -> next = prev;
        }else{
            head = prev;
        }
        
        reverseT -> next = curr;
        return head;
    }
};