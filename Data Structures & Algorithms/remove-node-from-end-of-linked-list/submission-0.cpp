class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> res;
        ListNode* curr = head;

        
        while (curr) {
            res.push_back(curr);
            curr = curr->next;
        }

        int size = res.size();
        int removeIndex = size - n;

      
        if (removeIndex == 0) {
            return head->next;
        }

    
        res[removeIndex - 1]->next = res[removeIndex]->next;

        return head;
    }
};
