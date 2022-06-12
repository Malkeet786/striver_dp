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
        ListNode* d = new ListNode();
        d->next = head;
        ListNode* slow = d;
        ListNode* fast = d;
        
        // 1. Move fast to n
        for(int i=0;i<n;i++)
            fast = fast->next;
        
        // 2. Move fast and slow by one unless fast points to the last node
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        
         ListNode *deletedis = slow->next;
        
        // 3. New linkage
        slow->next = slow->next->next;
        
        delete deletedis;
         
        // 4. Covers up the edge case when head is to be removed:
        return d->next;
        
    }
};