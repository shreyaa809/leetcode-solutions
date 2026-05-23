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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if (head== NULL||head->next==NULL)
        return NULL;
        if (head->next->next==NULL)
        {
            ListNode* temp=head->next;
        head->next=NULL;
        delete temp;
        return head;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode*slow1=slow;
        while (fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow1=slow;
            slow=slow->next;
        }    
        ListNode* delNode=slow1->next;
        slow1->next=slow1->next->next;
        delete delNode;
        return head;
    }
};