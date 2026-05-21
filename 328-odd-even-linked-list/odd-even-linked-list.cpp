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
        int idx=1; 
        ListNode* temp=head;
        int size=1;
        while (temp!=NULL)
        {
            temp=temp->next;
            size++;
        }
        ListNode* newList=new ListNode(-1);
        ListNode* t=newList;
        temp=head;
        for (int i=1;i<size;i++)
        {
            if (i%2!=0)
            {
            t->next= new ListNode(temp->val);
           t=t->next;
            }
            temp=temp->next;
            
        }
        temp=head;
        for (int i=1;i<size;i++)
        {
            if (i%2==0)
            {
            t->next= new ListNode(temp->val);
           t=t->next;
            }
            temp=temp->next;
        }
        return newList->next;
    }
};