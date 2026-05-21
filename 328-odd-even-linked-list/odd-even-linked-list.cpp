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
    ListNode* oddEvenList(ListNode* head) 
    {
        ListNode* temp=head;
        ListNode* odd=new ListNode(-1);
        ListNode* even=new  ListNode(-1);
        ListNode* eve=even;
        ListNode* od=odd;
        int i=1;
        while (temp!=NULL)
        {
            if (i%2==1)
            {
            odd->next=new ListNode(temp->val);
            odd=odd->next;
            }
            else
            {
            even->next=new ListNode(temp->val);
            even=even->next;
            }
            i++;
            temp=temp->next;
        }
        odd->next=eve->next;
        return od->next;
    }
};