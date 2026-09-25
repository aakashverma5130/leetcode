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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            return NULL;
        }
        ListNode* temp = head;
        ListNode* prev = NULL;
        int cnt = 0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        temp = head;
        for(int i=0;i<cnt/2;i++){
            prev = temp;
            temp=temp->next;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};