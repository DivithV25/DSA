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
    ListNode *deleteDuplicates(ListNode *head)
    {
        set<int> stt;
        ListNode *temp = head;
        while (temp != NULL)
        {
            stt.insert(temp->val);
            temp = temp->next;
        }
        ListNode *head1 = nullptr;
        ListNode *tail = nullptr;
        for (auto value : stt)
        {
            ListNode *newNode = new ListNode(value);
            if (!head1)
            {
                head1 = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head1;
    }
};