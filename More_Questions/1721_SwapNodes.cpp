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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> answer;
        int n = 0;
        ListNode* temp = head;
        while (temp) {
            answer.push_back(temp->val);
            n++;
            temp = temp->next;
        }
        swap(answer[k - 1], answer[n - k]);
        temp = head;
        int i = 0;
        while (temp) {
            temp->val = answer[i];
            temp = temp->next;
            i++;
        }
        return head;
    }
};