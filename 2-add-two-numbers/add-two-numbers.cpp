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
class Solution
 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
     
        ListNode* newList=new ListNode(-1);
        ListNode* d=newList;
        ListNode* h1=l1;
        ListNode* h2=l2;

        int carry=0;
        
        while (h1!=NULL && h2!=NULL)
        {
            int sum=0;
            sum+=carry+h1->val+h2->val;
            d->next=new ListNode(sum%10);
            d=d->next;
            carry=sum/10;
            h1=h1->next;
            h2=h2->next;
        }
        while (h1!=NULL)
        {
             int sum=0;
            sum+=carry+h1->val;
            d->next=new ListNode(sum%10);
            d=d->next;
            carry=sum/10;
            h1=h1->next;
        }
        while (h2!=NULL)
        {
             int sum=0;
            sum+=carry+h2->val;
            d->next=new ListNode(sum%10);
            d=d->next;
            carry=sum/10;
            h2=h2->next;
        }
        if (carry)
        d->next=new ListNode(carry);
        d=d->next;
        return newList->next;
    }
};