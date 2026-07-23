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
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast-> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next; 
            fast = fast -> next -> next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr != NULL){
            next = curr-> next;
            curr -> next = prev;
            prev = curr; 
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head-> next == NULL){
            return true;
        }
        ListNode* mid = findMid(head);
        ListNode* scndHalf = mid-> next;
        mid-> next = NULL;
        ListNode* scndHalfH = reverse(scndHalf);
        ListNode* firstHalfH = head;

        while(firstHalfH != NULL && scndHalfH != NULL){
            if(firstHalfH -> val != scndHalfH -> val){
                return false;
            }
            firstHalfH = firstHalfH -> next;
            scndHalfH = scndHalfH -> next;
        }
       
        return true;
    }
};