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
private:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = nullptr,*current = head;
        while(current)
        {
            ListNode* temp = current;
            current = current->next;
            temp->next = prev;
            prev = temp;  
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head,*fast = head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow = slow->next;
        }
        ListNode *head2 = reverse(slow);
        ListNode *t1 = head,*t2=head2;
        bool ispalindrome = true;
        while(t2)
        {
            if(t2->val != t1->val) 
            {
                ispalindrome = false;
                break;
            }
            t2=t2->next;
            t1=t1->next;
        }
        reverse(head2);
        return ispalindrome;
    }
};