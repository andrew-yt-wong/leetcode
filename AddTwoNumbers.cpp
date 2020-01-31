/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode(0);
        ListNode* head = sum;
        while (l1 != NULL || l2 != NULL) {
            if (l1 != NULL && l2 != NULL) sum->val += l1->val + l2->val;
            else if (l1 != NULL) sum->val += l1->val;
            else if (l2 != NULL) sum->val += l2->val;
            
            if (sum->val > 9) {
                sum->val -= 10;
                sum->next = new ListNode(1);
            }
            else if (((l1 != NULL) && (l1->next != NULL)) || 
                     ((l2 != NULL) && (l2->next != NULL)))
                sum->next = new ListNode(0);
            sum = sum->next;
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }
        return head;
    }
};