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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tmp = list1;
         ListNode* tmp2 = list1;
         ListNode* tmp3 = list1;
         vector<int> val;
        if (list1 == NULL)
            return(list2);
        if (list2 == NULL)
            return(list1);
        while( list1->next !=NULL)
            list1 = list1->next;
        list1->next =list2; 
        while(tmp != NULL)
        {
            val.push_back(tmp->val);
            tmp = tmp->next;
        }
        sort(val.begin(),val.end());
        int i = 0;
        while(tmp2 != NULL)
        {
            tmp2->val = val[i];
            i++;
            tmp2 = tmp2->next;
        }
        return(tmp3);
    }
};