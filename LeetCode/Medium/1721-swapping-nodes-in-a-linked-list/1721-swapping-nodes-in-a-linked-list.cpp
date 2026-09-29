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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* start = head;
        ListNode* end = head;
        int cnt = 0;
        if(head==NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        for(int i=1;i<k;i++){
            start=start->next;
        }
        for(int i=0;i<cnt-k;i++){
            end=end->next;
        }
        int x = start->val;
        start->val = end->val;
        end->val = x;
        return head;
    }
};