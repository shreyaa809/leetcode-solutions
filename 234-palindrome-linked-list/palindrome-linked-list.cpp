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
    ListNode* reverseNode(ListNode* head)
    {
        if (head==NULL|| head->next==NULL)
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
    bool isPalindrome(ListNode* head) 
    {
        //pehla method is stack wala aadhe elements ko stack pe daalo then next half ko compare kro stack ke top se
        //METHOD 2 ->space O(n)
        ListNode* slow=head;
        ListNode* fast=head;
        while (fast->next!=NULL&& fast->next->next!=NULL) // cz we need mid1 (uske baad wala node se reverse krna hai na)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=reverseNode(slow->next);
        ListNode* temp=newHead;
        fast=head;
        while (temp!=NULL)
        {
            if (fast->val!=temp->val)
            {
                reverseNode(newHead);
                return false;
            }
            temp=temp->next;
            fast=fast->next;
        }
        reverseNode(newHead);
        return true;

    }
};