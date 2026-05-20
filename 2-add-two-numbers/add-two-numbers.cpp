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
        
        while (h1!=NULL || h2!=NULL) {
            int sum=carry;
            if (h1!=NULL)
            {
                sum+=h1->val;
                h1=h1->next;
            }
            if (h2!=NULL)
            {
                sum+=h2->val;
                h2=h2->next;
            }
            d->next=new ListNode(sum%10);
            d=d->next;
            carry=sum/10;
            
        }
       
        if (carry){
        d->next=new ListNode(carry);
        d=d->next;
        }
        return newList->next; 
    }
};