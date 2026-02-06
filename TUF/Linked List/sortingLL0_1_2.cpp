// time complexity is O(N)
// space complexity is O(1)

/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode *sortList(ListNode *head) 
    {
        ListNode* temp = head;
        ListNode* L0 = new ListNode(-1);
        ListNode* ptr0 = L0;
        ListNode* L1 = new ListNode(-1);
        ListNode* ptr1 = L1;
        ListNode* L2 = new ListNode(-1);
        ListNode* ptr2 = L2;
        while(temp != NULL)
        {
            ListNode* nxt = temp->next;
            temp->next = NULL;
            if(temp -> val == 0)
            {
                L0->next = temp;
                L0 = L0->next;
            }
            else if(temp->val == 1)
            {
                L1->next = temp;
                L1 = L1->next;
            }
            else
            {
                L2->next = temp;
                L2 = L2->next;
            }
            temp = nxt;
        }
        L0->next = ptr1->next ? ptr1->next : ptr2->next;
        L1->next = ptr2->next;
        L2->next = NULL;
        return ptr0->next;
    }
};


















