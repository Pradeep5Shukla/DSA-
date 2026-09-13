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
    ListNode* deleteMiddle(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while (temp!=NULL){
            len ++;
            temp = temp->next;
        }
        int mid = len/2;
        ListNode* tempnew = head;
        for(int i = 1;i<mid;i++){
            tempnew = tempnew->next;
        }
        tempnew->next = tempnew->next->next;
        return head;
    }
};