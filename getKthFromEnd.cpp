/**
 * 链表中倒数第k个节点
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL) {
            fast = fast->next;
            if (k > 0) {
                k--;
            } else {
                slow = slow->next;
            }    
        }

        if (k > 0) {
            return NULL;
        } else {
            return slow;
        }
    }
};