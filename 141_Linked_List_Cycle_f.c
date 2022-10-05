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
    bool hasCycle(ListNode *head) {
        ListNode *slow;
        ListNode *fast;
        slow = head;
        fast = head;

        while (slow != NULL && fast != NULL){
            slow = slow->next;
            fast = fast->next;
            if (fast == NULL)
                return false;
            fast = fast->next;

            if (slow == fast)
                return true;
        }
        return false;

    }
};


//time<98.26%
//space<17.84%