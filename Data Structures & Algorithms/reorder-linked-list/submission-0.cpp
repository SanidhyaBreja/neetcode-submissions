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
    void reorderList(ListNode* head) {
        if(!head)
        return;
        ListNode*curr=head;
        vector<ListNode*>res;
        while(curr)
        {
            res.push_back(curr);
            curr=curr->next;
        }
        int i=0,j=res.size()-1;
        while(i<j)
        {
            res[i]->next=res[j];
            i++;
            if(i>=j)
            break;
            res[j]->next=res[i];
            j--;
        }
        res[i]->next=nullptr;
        
    }
};
