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
    ListNode* reverseList(ListNode* head)
    {
        if (head==NULL||head->next==NULL)
        return head;
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* front;
        while (temp!=NULL)
        {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* newHead=reverseList(head);
        ListNode* temp=newHead;
        int i=1;
        if (head==NULL)
        return NULL;
        if (n==1)
        {
            if (newHead->next==NULL)
            return NULL;
            ListNode* headd=newHead->next;
            newHead->next=NULL;
            delete newHead;
            return reverseList(headd);
        }
        while (i<n-1)
        {
        i++;
        temp=temp->next;
        }
        ListNode* no=temp->next;
        temp->next=temp->next->next;
        no->next=NULL;
        delete no;
        return reverseList(newHead);
       
    }
};