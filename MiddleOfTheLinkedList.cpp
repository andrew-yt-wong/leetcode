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
    ListNode* middleNode(ListNode* head) {
        int counter = 0;
        ListNode* temp = head;
        while (temp != NULL)
        {
            counter++;
            temp = temp->next;
        }
        counter = counter / 2;
        while (counter > 0)
        {
            head = head->next;
            counter--;
        }
        return head;
        /*int counter = 0;
        ListNode* curr = head;
        while (curr != NULL)
        {
            ++counter;
            curr = curr->next;
        }
        curr = head;
        for (int i = 0; i < counter / 2; ++i)
            curr = curr->next;
        return curr;*/
    }
};