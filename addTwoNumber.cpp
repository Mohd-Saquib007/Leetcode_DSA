#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
    ListNode *add(ListNode *l1, ListNode *l2)
    {
        ListNode *head = new ListNode(0);
        ListNode *curr = head;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0)
        {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            int digit = sum % 10;
            carry = sum / 10;
            curr->next = new ListNode(digit);
            curr = curr->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        return head->next;
    }

public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        ListNode *sum = add(l1, l2);
        return sum;
    }
};