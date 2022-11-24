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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* temp1 = nullptr;
        ListNode* temp2 = nullptr;
        while(head != nullptr){
            temp1 = head;
            head = head->next;
            temp1->next = temp2;
            temp2 = temp1;
        }
        return temp1;
    }
};

//88.68
//79.9