/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* a=headA;
        ListNode* b=headB;
        set<ListNode*>st;
        while (b!=NULL)
        {
           st.insert(b);
           b=b->next;
        }
        while (a!=NULL)
        {
            if (st.find(a)!=st.end())
            return a;
            a=a->next;
        }
        return NULL;
    }
};