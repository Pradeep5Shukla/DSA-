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
    ListNode* swapPairs(ListNode* head) {
        // ListNode* temp = head;
        // while(temp!=nullptr && temp->next!=nullptr){
        //     ListNode* t = new ListNode(-1);
        //     if(temp->next != nullptr){
        //         t->val=temp->next->val;
        //         temp->next->val = temp->val;
        //         temp->val = t->val;
        //     }
        //     temp=temp->next->next;
            
        // }
        // return head;


        if(head == nullptr || head->next == nullptr) return head;
        
        ListNode* newHead = head->next;   // second node becomes the new head
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while(curr != nullptr && curr->next != nullptr){
            ListNode* first = curr;
            ListNode* second = curr->next;
            
            first->next = second->next;
            second->next = first;
            
            if(prev != nullptr) prev->next = second;  // link previous pair to this one
            
            prev = first;          // first is now the tail of this swapped pair
            curr = first->next;    // move to the next pair
        }
        
        return newHead;
    }
};