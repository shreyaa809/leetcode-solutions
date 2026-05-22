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
    bool isPalindrome(ListNode* head) 
    {
        if (head==NULL||head->next==NULL)
        return true;
        ListNode* slow=head;
        ListNode* fast=head;
        int cnt=0;
        
        while (fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            cnt++;
            
        }
        if (fast!=NULL)
        cnt++;
        fast=head; //now slow is at middle index and fats at beginning
    
        stack<int>s;
        int c=0;
        while (c<cnt)
        {
            s.push(fast->val);
            fast=fast->next;
            c++;
        }
        while (slow!=NULL)
        {
            if (slow->val!=s.top())
            return false;
            slow=slow->next;
            s.pop();
        }
        return true;


    }
};