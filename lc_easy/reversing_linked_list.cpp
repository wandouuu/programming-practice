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
    ListNode* reverseList(ListNode* head) {
        
        if(head == nullptr){
            return head;
        } else if(head->next == nullptr){
            return head;
        }

        ListNode* before{head};
        ListNode* curr{head->next};

        head->next = nullptr;

        while(curr != nullptr){
            ListNode* tmp{curr->next};

            curr->next = before;
            
            before = curr;
            curr = tmp;
        }
        

        return before;
    }
};