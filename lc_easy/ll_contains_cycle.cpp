/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head == nullptr){
            return false;
        } else if(head->next == nullptr){
            return false;
        }
        
        std::set <ListNode*> seen{};

        ListNode* ptr{head};

        while(ptr != nullptr){
            if(seen.contains(ptr)){
                return true;
            } 

            seen.insert(ptr);
            ptr = ptr->next;
        }

        return false;
    }
};