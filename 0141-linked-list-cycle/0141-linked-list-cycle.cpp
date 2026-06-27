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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> key ;

        while (head != NULL && key.find(head) == key.end() )
        {
            key.insert(head);
            head = head->next;
        }
        if (head == NULL)
            return(false);
        return(true);
    }
};