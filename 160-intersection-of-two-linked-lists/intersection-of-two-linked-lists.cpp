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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        ListNode* temp2=headB;
        int count1=0;
        int count2=0;
        while(temp!=NULL){
            temp=temp->next;
            count1++;
        }
        while(temp2!=NULL){
            temp2=temp2->next;
            count2++;
        }
          temp=headA;
          temp2=headB;
        if(count1>count2){
            while(count1>count2){
                temp=temp->next;
                count1--;
            }
        }
        else if(count2>count1){
            while(count2>count1){
                temp2=temp2->next;
                count2--;
            }

        }
        while(temp!=NULL&&temp2!=NULL){
             if(temp==temp2)return temp;
            temp=temp->next;
            temp2=temp2->next;
        }
        return NULL;

        
    }
};