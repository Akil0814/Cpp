#include <iostream>
using namespace std;
//二叉树
//创建 深度优先 广度优先

struct Tree
{
    int data = 0;
    Tree *left = nullptr;
    Tree *right = nullptr;
};

void create_tree(Tree *top, int num)//num 代表要创建几层
{
    if (num <= 0)
        return;

    static int count = 1;
    top->data = count++;

    if (num > 1)//当num=1时代表已经到达底层了 不需要继续创建
    {
        top->left = new Tree;
        top->right = new Tree;
        create_tree(top->left, num - 1);
        create_tree(top->right, num - 1);
    }
}

void depth_first(Tree *top)
{
    if (top == nullptr)//检测空指针
        return;

    //访问根节点 → 遍历左子树 → 遍历右子树
    cout << top->data << " ";
    depth_first(top->left);
    depth_first(top->right);
    cout << endl;
}


void breadth_first(Tree *top)
{
    if (top == nullptr)//检测空指针
        return;
    cout << top->data << " ";
    while(true)
    {
    }
}


int main()
{
    Tree *top = new Tree;
    create_tree(top, 4);
    print_tree(top);

    return 0;
}
