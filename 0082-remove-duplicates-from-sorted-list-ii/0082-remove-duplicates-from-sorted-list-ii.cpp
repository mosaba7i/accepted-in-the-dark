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
    ListNode* deleteDuplicates(ListNode* head) {
        int prev = -101;
        int cur = -101;
        int next = -101;
        ListNode* tmp = NULL;
        ListNode* res = NULL;
        int tmp_changed = 0;
        while(head != NULL)
        {
            cur = head->val; 
            next = (head->next ? head->next->val : INT_MAX);
            if (cur != next && cur != prev)
            {
                prev = cur;
                if (res == NULL)
                {
                    res = head;
                    tmp = res;
                }
                else
                {
                    tmp->next = head;
                    tmp = tmp->next;
                }
                head = head->next;
            }
            else if (cur == next || cur == prev)
            {
                prev = cur;
                head = head->next;
                
                
            }
            
            
        }
        if (tmp)
    tmp->next = NULL;
        return(res);
    }
};