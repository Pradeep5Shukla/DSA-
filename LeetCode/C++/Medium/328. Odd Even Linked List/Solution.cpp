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
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* curr = head;
        ListNode* nxt = head->next;
        ListNode* temp = nxt;

        while (nxt != nullptr && nxt->next != nullptr) {
            curr->next = curr->next->next;
            nxt->next = nxt->next->next;
            curr = curr->next;
            nxt=nxt->next;
        }
        curr->next=temp;
        return head;
    }
};