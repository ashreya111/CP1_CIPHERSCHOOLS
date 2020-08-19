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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     ListNode * l3 = new ListNode(0);
        ListNode * head = l3;
        while(l1 || l2)
        {
            if(l1 && l2 && l1->val <=l2->val)
            {
                head->next = new ListNode(l1->val);
                l1=l1->next;
            }
            else if(l1 && l2 && l1->val >=l2->val )
            {
                head->next = new ListNode(l2->val);
                l2=l2->next;
            }
            else if(l2)
            {
                head->next = new ListNode(l2->val);
                l2=l2->next;
            }
            else
            {
                head->next = new ListNode(l1->val);
                l1=l1->next;
            }
            head=head->next;
        }
        return l3->next;
    }
};
