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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> answer;
        while (temp != NULL) {
            answer.push_back(temp->val);
            temp = temp->next;
        }
        sort(answer.begin(), answer.end());
        temp = head;
        int n = answer.size();
        int i = 0;
        while (temp != NULL && i < n) {
            temp->val = answer[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};