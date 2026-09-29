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
        ListNode* temp = head;
        int cnt = 0;
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(n==cnt){
            temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
            return head;
        }
        temp = head;
        for(int i=1;i<cnt-n;i++){
            temp = temp->next;
        }
        ListNode* prev = temp;
        ListNode* forward = temp->next->next;
        ListNode* current = temp->next;
        prev->next = forward;
        current->next = nullptr;
        delete current;
        return head;
    }
};