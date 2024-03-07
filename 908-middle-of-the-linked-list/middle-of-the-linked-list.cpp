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
    ListNode* middleNode(ListNode* head) {
        ListNode *rabit=head;
        ListNode *turtle=head;
        while(rabit->next!=NULL and rabit->next->next!=NULL){
            rabit=rabit->next->next;
            turtle=turtle->next;
        }
        if(rabit->next==NULL)return turtle;
        return turtle->next;
    }
};