#include <deque>
#include <iostream>
using namespace std;
// 二叉树
// 创建 深度优先 广度优先

struct Tree
{
    int data = 0;
    Tree *left = nullptr;
    Tree *right = nullptr;
};

void create_tree_by_level(Tree *top, int level,int& start_num) // num 代表要创建几层
{
    if (level <= 0)
        return;

    top->data =start_num++;

    if (level > 1) // 当num=1时代表已经到达底层了 不需要继续创建
    {
        top->left = new Tree;
        top->right = new Tree;
        create_tree_by_level(top->left, level - 1,start_num);
        create_tree_by_level(top->right, level - 1,start_num);
    }
}

void destroy_tree(Tree* top)
{
    if (!top) return;
    destroy_tree(top->left);
    destroy_tree(top->right);
    delete top;
}

void depth_first(Tree *top)
{
    if (top == nullptr) // 检测空指针
        return;

    // 访问根节点 → 遍历左子树 → 遍历右子树
    cout << top->data << " ";
    depth_first(top->left);
    depth_first(top->right);
}

void breadth_first(Tree* top)
{
    if (top == nullptr)
        return;

    //创建队列
    deque<Tree*> tree_deque;
    tree_deque.push_back(top);//将头节点加入

    while (!tree_deque.empty())
    {
        Tree* curr = tree_deque.front();
        tree_deque.pop_front();

        std::cout << curr->data << " ";//输出队头元素

        if (curr->left)
            tree_deque.push_back(curr->left);
        if (curr->right)
            tree_deque.push_back(curr->right);
    }
}

int main()
{
    Tree *top = new Tree;
    int s_num=1;
    create_tree_by_level(top, 4,s_num);

    depth_first(top);
    cout << endl;
    breadth_first(top);

    destroy_tree(top);

    return 0;
}
