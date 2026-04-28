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
        ListNode* toEnd = head;
        ListNode* mid = head;
        
        int len=0;
        int midLen=0;
        while(toEnd != nullptr){
            toEnd = toEnd->next;
            len++;
            if(midLen!=len/2){
                mid = mid->next;
            }
            midLen=len/2;
        }

        return mid;
        
    }
};