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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* last = head;
        ListNode* prev = NULL;
        if (last-> next == NULL){
            return NULL;
        }
        while( last-> next != NULL){
            prev = last;
            last = last -> next;

        }

        for (int i = 1; i < n; i++){
            ListNode* temp = head;
            
            if(temp != prev)
            {
                while(temp -> next != prev){
                temp = temp -> next;
            }
            last = prev;
            prev = temp;
            }
            else{
                return head->next;
            }
        }

        prev-> next = last -> next;
        return head;
    }
};