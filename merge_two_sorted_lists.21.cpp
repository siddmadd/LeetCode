/*
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == nullptr) {
            return list2;
        } else if (list2 == nullptr) {
            return list1;
        }

        ListNode* start;
        if (list1->val > list2->val) { 
            start = list2;
            list2 = list2->next;
        } else {
            start = list1;
            list1 = list1->next;
        }

        ListNode* current = start;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val > list2->val){ 
                current->next = list2;
                list2 = list2->next;
            } else if (list1->val < list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        if (list1 == nullptr) {
            current->next = list2;
        } else {
            current->next = list1;
        }
        return start;
    }
};