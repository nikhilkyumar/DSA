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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* ehead=head->next;
        while(even!=NULL&&even->next!=NULL){
            odd->next=even->next;
            odd=even->next;
            even->next=even->next->next;
            even=odd->next;

        }
        odd->next=ehead;
        return head;
        
    }
};