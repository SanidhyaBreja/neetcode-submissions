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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>v1;
        vector<int>v2;
        vector<int>ans;
        while(l1)
        {
            v1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
            v2.push_back(l2->val);
            l2=l2->next;
        }
        int i=0,carry=0;
        ListNode*dummy=new ListNode(0);
        ListNode*curr=dummy;
        while(i<v1.size()|| i<v2.size()|| carry)
        {
            int sum=carry;
            if(i<v1.size())
            sum+=v1[i];
           if(i<v2.size())
            sum+=v2[i];
            carry=sum/10;
            sum=sum%10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            i++;

        }
        return dummy->next;
    }
};
