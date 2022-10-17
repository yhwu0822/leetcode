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
        ListNode* slow = head;
        ListNode* fast = head;

        if(fast->next == nullptr)
            return nullptr;
        fast = fast->next;
        if(fast->next == nullptr){
            head->next = nullptr;
            return head;
        }
        fast = fast->next;

        while (fast != nullptr){

            fast = fast->next;
            if (fast != nullptr){
                slow = slow->next;
                fast = fast->next;
            }
        }

        slow->next = slow->next->next;
        return head;

    }
};

//time<42.37%
//space<96.70%
