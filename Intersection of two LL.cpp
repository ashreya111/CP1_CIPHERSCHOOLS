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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=length(headA);
        int l2=length(headB);
        if(l1==0 || l2==0)
            return 0;
        if(l1>l2)
        {
            int d=l1-l2;
        for(int i=0;i<d;i++)
        {
            headA=headA->next;
        }
        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }
            return headA;
        }
        else
        {
            int d=l2-l1;
        for(int i=0;i<d;i++)
        {
            headB=headB->next;
        }
        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        } 
            return headB;
        }
        
    }
    int length(ListNode *root)
    {
        if(root==NULL)
            return NULL;
        int c=0;
        while(root!=NULL)
        {
            root=root->next;
            c++;
        }
        return c;
    }
};
