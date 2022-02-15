class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return 0;
        if(head->next==NULL) return 0;
        ListNode *slow=head;
        ListNode *fast=head;
        while(slow and fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast and slow==fast) return 1;
            
        }
        return 0;
    }
};
