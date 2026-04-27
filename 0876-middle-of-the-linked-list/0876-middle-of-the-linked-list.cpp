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
        ListNode* lenCheck = head;
        
        int len=1;
        while(lenCheck != nullptr){
            lenCheck = lenCheck->next;
            len++;
        }

        int mid =0;

        if(len&1){
            mid = len/2;
        }
        else{
            mid=len/2 -1;
        }

        ListNode* finder = head;
        for(int i=0;i<mid;i++){
            finder = finder->next;
        }

        return finder;
        
    }
};