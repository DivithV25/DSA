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
        if(!head || !head->next) return nullptr;
        ListNode* prev=nullptr;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next){   
            prev=slow;
            slow=slow->next;              
            fast=fast->next->next;               //fast poiinter moves twice the speed of the slow pointer so Fast=End,Slow=middle
        }
        prev->next=slow->next;
        return head;
    }
};
