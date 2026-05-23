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

    ListNode* findmidNode(ListNode* head)
    {
        if (head==NULL||head->next==NULL)
        return head;
        ListNode* fast=head;
        ListNode* slow=head;
        while (fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    } 
    ListNode* ms(ListNode* head)
    {
        if (head==NULL||head->next==NULL)
        return head;
        ListNode* midN=findmidNode(head);
        ListNode* leftHead=head;
       ListNode* rightHead=midN->next;
        midN->next=NULL;
       
        leftHead=ms(leftHead);
        rightHead=ms(rightHead);
        return merge(leftHead,rightHead);
    }
    ListNode* merge(ListNode* lh,ListNode* rh)
    {
        if (lh==NULL)
        return rh;
        if (rh==NULL)
        return lh;
        ListNode* dummyNode=new ListNode(-1);
       ListNode* temp=dummyNode;
        while (lh!=NULL&& rh!=NULL)
        {
            if (lh->val>rh->val)
            {
                temp->next=rh;
                rh=rh->next;
            }
            else
            {
                temp->next=lh;
                lh=lh->next;
            }
            temp=temp->next;
            
        }
        while (lh!=NULL)
        {
            temp->next=lh;
            lh=lh->next;
            temp=temp->next;
        }
        while (rh!=NULL)
        {
            temp->next=rh;
            rh=rh->next;
            temp=temp->next;
        }
        return dummyNode->next;
    }
    ListNode* sortList(ListNode* head) 
    {
        return ms(head);
    }
};