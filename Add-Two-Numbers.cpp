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
14    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
15        ListNode* dummy = new ListNode(0);
16        ListNode* current = dummy;
17        int carry = 0;
18
19        while (l1 != nullptr || l2 != nullptr || carry) {
20            int sum = carry;
21
22            if (l1) {
23                sum += l1->val;
24                l1 = l1->next;
25            }
26
27            if (l2) {
28                sum += l2->val;
29                l2 = l2->next;
30            }
31
32            carry = sum / 10;
33            current->next = new ListNode(sum % 10);
34            current = current->next;
35        }
36
37        return dummy->next;
38    }
39};