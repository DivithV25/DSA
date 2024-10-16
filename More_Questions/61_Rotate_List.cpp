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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;
        ListNode* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }
        temp->next = head;
        k = k % length;
        int to_tail = length - k;
        temp = head;
        for (int i = 1; i < to_tail; i++) {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = nullptr;

        return head;
    }
};