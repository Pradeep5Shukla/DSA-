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
    ListNode* reverseList(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left==right) return head;
        ListNode* b = NULL;
        ListNode* a = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL;
        ListNode* temp = head;
        int n = 1;
        while(temp){
            if(n==left-1) a = temp;
            if(n==left) b = temp;
            if(n==right) c = temp;
            if(n==right-1) d = temp;
            temp = temp->next;
            n++;
        }
       ListNode* afterC = c->next;  
        if(a) a->next = NULL;
        c->next = NULL;
        ListNode* newHead = reverseList(b);
        if(a) a->next = newHead;
        b->next = afterC;
        if(a) return head;
        return newHead;
    }
};