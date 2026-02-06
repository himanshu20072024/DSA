// time complexity is O(3N)
// space co plexity is O(1)

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
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL)
        {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }

    ListNode *addOne(ListNode *head) 
    {
        head = reverse(head);
        ListNode* temp = head;
        int carry = 1;
        while(temp != NULL)
        {
            temp->val = temp->val + carry;
            if(temp->val < 10)
            {
                carry = 0;
                break;
            }
            else
            {
                temp->val = 0;
                carry = 1;
            }
            temp = temp->next;
        }
        if(carry == 1)
        {
            ListNode* newNode = new ListNode(1);
            head = reverse(head);
            newNode->next = head;
            return newNode;
        }
        head = reverse(head);
        return head;
    }
};









