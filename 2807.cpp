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

// 1st method
// using iterative method
// T.C. = o(n)
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head ->next)
        {
            return head;
        }
        ListNode* currNode = head;
        ListNode* nextNode = head -> next;
        while(nextNode)
        {
            

            ListNode* GCDvalue = new ListNode(__gcd(currNode -> val, nextNode -> val));

            currNode -> next = GCDvalue;
            GCDvalue -> next = nextNode;

            currNode = nextNode;
            nextNode = nextNode -> next;
        } 
        return head;
    }
};

//2nd method:
//using recursion.
// T.C. = o(n)
class Solution {
public:
ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head ->next)
        {
            return head;
        }
        
        ListNode* temp = insertGreatestCommonDivisors(head -> next);
        ListNode* GCDvalue = new ListNode(__gcd(head -> val, head -> next -> val));
            
            GCDvalue -> next = temp;
            head -> next = GCDvalue;
            
        return head;
    }
};
