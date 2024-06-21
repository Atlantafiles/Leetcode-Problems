#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* curr = l3;
        int carry = 0;
        while( l1 || l2 || carry)
        {
            int sum = carry;
            if (l1)
            {
                sum = sum + l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum = sum + l2->val;
                l2 = l2->next;
            }
            carry = sum / 10 ;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }
        return l3->next;
    }
};

int main()
{
    Solution obj;
    ListNode* l1 = new ListNode(2);  
    l1->next = new ListNode(4);  
    l1->next->next = new ListNode(3);  
    ListNode* l2 = new ListNode(5);  
    l2->next = new ListNode(6);  
    l2->next->next = new ListNode(4);  
    ListNode* result = obj.addTwoNumbers(l1, l2);  
    while (result) {  
        std::cout<<result->val << " ";  
        result = result->next;  
    }  
    std::cout<<std::endl;  
    return 0;  
}