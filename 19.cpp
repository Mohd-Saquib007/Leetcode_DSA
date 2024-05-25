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
    void reverse(ListNode *&head)
    {
        if (head == NULL || head->next == NULL)
        {
            return;
        }
        ListNode *prev = NULL;
        ListNode *current = head;
        ListNode *nextNode;
        do
        {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        } while (current != nullptr);
        head = prev;
    }

public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        reverse(head);
        ListNode *temp = head;
        int j = 0;
        while (j != n - 1 && temp->next != nullptr)
        {
            temp = temp->next;
            ++j;
        }
        ListNode *temp2 = temp->next;
        temp->next = temp->next->next;
        delete temp2;
        reverse(head);
        return head;
    }
};