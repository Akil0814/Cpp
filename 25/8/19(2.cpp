//leetcode 21
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode dummy;
    ListNode* cur = &dummy;

    while (list1 && list2) {
        if (list1->val <= list2->val) {
            cur->next = list1;
            list1 = list1->next;
        } else {
            cur->next = list2;
            list2 = list2->next;
        }
        cur = cur->next;
    }
    cur->next = list1 ? list1 : list2;
    return dummy.next;
}

// 辅助函数：用 vector 建链表
ListNode* buildList(const vector<int>& vals) {
    ListNode dummy;
    ListNode* cur = &dummy;
    for (int v : vals) {
        cur->next = new ListNode(v);
        cur = cur->next;
    }
    return dummy.next;
}

// 辅助函数：打印链表
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << "\n";
}

int main() {
    // 构建输入
    vector<int> v1 = {1, 2, 4};
    vector<int> v2 = {1, 3, 4};
    ListNode* list1 = buildList(v1);
    ListNode* list2 = buildList(v2);

    // 调用函数
    ListNode* merged = mergeTwoLists(list1, list2);

    // 打印结果
    printList(merged);  // 输出: 1 -> 1 -> 2 -> 3 -> 4 -> 4

    return 0;
}
