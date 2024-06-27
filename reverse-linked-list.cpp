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
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* temp = head;
        vector<int> ll;
        while (temp != nullptr) {
            ll.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* t = new ListNode(ll[0]);
        for (int i = 1; i < ll.size(); ++i) {
            t = new ListNode(ll[i],t);
        }
        return t;
    }
};