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
 int getLen(ListNode* head)
 {
    int i = 0;
    while(head)
    {
        i++;
        head = head->next;
    }
    return(i);
 }
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* h = NULL; //node lead to th first node of res
        ListNode *c = head; // node to iterate betwen the linked list
        ListNode* null; // to set the last node's next node that won't rotate to null
        int l = getLen(head);
        if (l == 0)
            return(head);
        k = k % l;
        if (k == 0)
            return(head);
        
        int d = l - k + 1; // well add one cuz the next while loop decrease d first so yeaa
        while(--d > 1)
            c = c->next;
        null = c;
        h = c->next; // first valid node
        c = h;
        while ( c->next != NULL)
            c = c->next;
        c-> next = head;
        null->next = NULL; //null is last valid node so we have like h->.->.->....->null->NULL
        return(h);
    }
    
};