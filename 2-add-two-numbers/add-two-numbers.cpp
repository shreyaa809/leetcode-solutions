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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* h1=l1;
        ListNode* h2=l2;
        int carry=0;
    
        ListNode* head=new ListNode(-1);
        ListNode* ans=head;
        while (h1!=NULL||h2!=NULL)
        {
            int v1=(h1==NULL)?0:h1->val;
            int v2=(h2==NULL)?0:h2->val;
            int sum=v1+v2+carry;
            if (sum>9)
            {
            carry=sum/10;
            sum=sum%10;
            }
            else
            carry=0;
            head->next=new ListNode(sum);
            head=head->next;
            if (h1!=NULL)
            h1=h1->next;
            if (h2!=NULL)
            h2=h2->next;
        }
        
        if (carry)
        head->next=new ListNode(carry);
        return ans->next;
    }
};