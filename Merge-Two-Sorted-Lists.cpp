1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11
12class Solution {
13public:
14    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
15
16        ListNode* dummy = new ListNode(-1);
17        ListNode* tail = dummy;
18
19        while (list1 != nullptr && list2 != nullptr) {
20            if (list1->val <= list2->val) {
21                tail->next = list1;
22                list1 = list1->next;
23            } else {
24                tail->next = list2;
25                list2 = list2->next;
26            }
27            tail = tail->next;
28        }
29
30        if (list1 != nullptr) {
31            tail->next = list1;
32        } else {
33            tail->next = list2;
34        }
35
36        return dummy->next;
37    }
38};