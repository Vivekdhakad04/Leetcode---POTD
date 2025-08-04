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
    int findLen(ListNode* temp){
        int count = 0;
        while(temp != nullptr){
            temp = temp->next;
            count++;
        }
    return count;
    }

public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || !head->next || k == 0) return head;

        int len = findLen(head);
        k = k % len;
        if(k == 0) return head;

        int count = 1;
        ListNode* temp = head;
        while(count < (len - k)){
            temp = temp->next;
            count++;
        }
        
        
        ListNode* newHead = temp->next;
        temp->next = nullptr;

        temp = newHead;
        while(temp->next)
        temp = temp->next;

        temp->next = head;

    return newHead;
    }
};