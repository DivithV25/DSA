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
class Solution
{
public:
    ListNode *modifiedList(vector<int> &nums, ListNode *head)
    {
        unordered_set<int> toBeDel;
        ListNode *dummyHead = new ListNode();
        dummyHead->next = head;
        ListNode *curr = dummyHead;
        ;
        ListNode *prev = dummyHead;
        for (auto num : nums)
            toBeDel.insert(num);

        while (curr != NULL)
        {
            ListNode *nextNode = curr->next;
            if (toBeDel.count(curr->val))
            {
                prev->next = nextNode;
            }
            else
            {
                prev = curr;
            }
            curr = nextNode;
        }
        return dummyHead->next;
    }
};