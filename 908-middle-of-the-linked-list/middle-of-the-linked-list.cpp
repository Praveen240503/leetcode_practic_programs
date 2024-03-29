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
        ios_base:: sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        ListNode* rabbit=head;
        ListNode* turtle=head;
        while(rabbit != NULL && rabbit->next != NULL )
        {
            rabbit=rabbit->next->next;
            turtle=turtle->next;
        }
        return turtle;
    }
};