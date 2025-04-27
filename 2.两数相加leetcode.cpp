#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        int carry = 0;//�洢��λ
        while (l1 != NULL || l2 != NULL)
        {
            //ȡ��L1��l2��ֵ
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;
            int sum = n1 + n2 + carry;
            if (head == NULL)
            {
                head = tail = new ListNode(sum % 10);
            }
            else {
                tail->next = new ListNode(sum % 10);
                tail = tail->next;//�ƶ�tailָ�뵽�½ڵ�

            }
            carry = sum / 10;//���½�λ
            if (l1)
            {
                l1 = l1->next;
            }
            if (l2)
            {
                l2 = l2->next;
            }
            if (carry > 0)
            {
                tail->next = new ListNode(carry);
            }

        }

        return head;
    }
};