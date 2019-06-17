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
    ListNode* middleNode(ListNode* head) {
        int length = len(head);
        int middle;
        if(length%2!=0)
        {
            middle = (length+1)/2-1;
        }
        else{
            middle = length/2;
        }
        cout<<"middle:"<<middle<<endl;
        while(head)
        {
            if(middle>0)
            {
                middle--;
                head=head->next;
            }
            else{
                break;
            }
        }
        return head;
    }
    
    int len(ListNode* head)
    {
        int l=0;
        while(head)
        {
            l++;
            head=head->next;
        }
        return l;
    }
};
