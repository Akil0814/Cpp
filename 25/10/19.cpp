//leetcode 94
//两个过程
//下潜到最深 开始回头并输出 遇到岔路停止输出 继续下潜

struct TreeNode
{
    int data = 0;
    TreeNode *left = nullptr;
    TreeNode *right = nullptr;
};

void create_tree_by_level(TreeNode *top, int level,int& start_num) // num 代表要创建几层
{
    if (level <= 0)
        return;

    top->data =start_num++;

    if (level > 1) // 当num=1时代表已经到达底层了 不需要继续创建
    {
        top->left = new TreeNode;
        top->right = new TreeNode;
        create_tree_by_level(top->left, level - 1,start_num);
        create_tree_by_level(top->right, level - 1,start_num);
    }
}


vector<int> inorderTraversal(TreeNode* root)
{

}



int main()
{
    TreeNode *top = new TreeNode;
    int s_num=1;
    create_tree_by_level(top, 4,s_num);


    return 0;
}
