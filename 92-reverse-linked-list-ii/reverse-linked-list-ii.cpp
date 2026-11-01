class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int i = 1;
        int j = 1;
        int k = 1;

        ListNode* curr1 = head;
        ListNode* curr2 = head;
        ListNode* prev = head;
        ListNode* next = NULL;

        int r = right + 1;
        int l = left - 1;

        while(i != r){
            curr1 = curr1->next;
            i++;
        }

        while(j != left){
            curr2 = curr2->next;
            j++;
        }

        if(left == 1) {
            prev = NULL;
        }
        else {
            while(k != l){
                prev = prev->next;
                k++;
            }
        }

        ListNode* before = prev;
        ListNode* tail = curr2;

        while(curr2 != curr1){
            next = curr2->next;
            curr2->next = prev;
            prev = curr2;
            curr2 = next;
        }

        if(left == 1)
            head = prev;
        else
            before->next = prev;

        tail->next = curr1;

        return head;
    }
};