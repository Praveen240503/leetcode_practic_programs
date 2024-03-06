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
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(head==NULL)return false;
        ListNode *rabit=head;
        ListNode *turtle=head;

        while(rabit->next!=NULL and rabit->next->next!=NULL){
            rabit=rabit->next->next;
            turtle=turtle->next;
            if(rabit==turtle){
                return true;
            }
        }
        return false;
    }
};