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
    void deleteNode(ListNode* node) {
        if (node == NULL || node -> next == NULL) {
            return;
        }
        // if not null
        //copy to prev
        node -> val = node -> next -> val;
        //copy temp
        ListNode* temp = node->next;
        //skip next to be deletd
        node -> next = node -> next -> next;
        //return
        delete temp;
    }
};