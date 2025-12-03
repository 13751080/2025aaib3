// week13-3.cpp 學習計畫 Linked List 第3題
// LeetCode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999); // 答案的指標
        ListNode* ans2 = ans; // 會負責將 ans 的指標逐一滑動、處理好
        int carry = 0; // 負責進位的部分
        while (l1 != nullptr || l2 != nullptr) { // 如果兩個指標, 有任一個存在,便可以繼續進行加法
            int now = carry; // 先將進位的部分, 放到現在的欄位
            if (l1 != nullptr){ // 如果第1個指標是好的, 就進行對應的加法
                now += l1->val; // 將值加入 now
                l1 = l1->next; // 換下一筆資料
            }
            if (l2 != nullptr){ // 如果第2個指標是好的, 就進行對應的加法
                now += l2->val; // 將值加入 now
                l2 = l2->next; // 換下一筆資料
            }
            ans2->next = new ListNode(now%10); //接下來, 準備新的node準備將對應的位數加入
            ans2 = ans2->next; // 換下一筆資料
            carry = now / 10; // 處理進位的問題
        } // 如果進開迴圈後, 還有進位的話
        if (carry>0) { // 就要再準備新的 node 來放最高位的進位
            ans2->next = new ListNode(carry);
        }
        return ans->next; // 最後在放值的時候, 要放 ans 的下一筆。
    }
};
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
