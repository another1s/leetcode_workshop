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
    vector<int> nextLargerNodes(ListNode* head){
        vector<int> value;
        while(head)
        {
            value.push_back(find_next_larger(head->next, head->val));
            head = head->next;
        }
        return value;
    }   
    int find_next_larger(ListNode* node,int target)
    {
        int res=0;
        while(node)
        {
            if(node->val>target)
            {
                res = node->val;
                break;
            }
            node=node->next;
        }
        return max(res,0);
    } 
};
