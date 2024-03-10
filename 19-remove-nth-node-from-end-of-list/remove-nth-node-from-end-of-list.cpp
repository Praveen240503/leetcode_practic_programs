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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        if(head->next==NULL){
            head=NULL;
            return head;
        }
        ListNode *temp=head;
        
        int c=0;
        while(temp){
            temp=temp->next;
            c++;
        }
        c=c-n;
        int x=0;
        temp=head;
        //cout<<c;
        if(c==0){
            head=head->next;
            return head;
        }
        while(x<c-1){
            temp=temp->next;
            x++;
        }
        //return temp;
        //temp->val=temp->next->val;
        temp->next=temp->next->next;
        return head;
    }
};