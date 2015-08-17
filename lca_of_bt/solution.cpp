#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution {
public:
    TreeNode* get_path(TreeNode* root, TreeNode* p, TreeNode* q, bool& p_found, bool& q_found) {
        if(root == NULL) {
            return NULL;
        }
        if(root == p) {
            p_found = true;
        }
        if(root == q) {
            q_found = true;
        }
        bool p_found_left = false, q_found_left = false;
        get_path(root->left, p, q, p_found_left, q_found_left);

        return NULL;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool p_found = false, q_found = false;
        get_path(root, p, q, p_found, q_found);
        TreeNode *lca = root;
        return lca;
    }
};

int main() {
    TreeNode* six = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode* two = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode* eight = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode* zero = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode* four = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode* seven = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode* one = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode* three = (TreeNode*) malloc(sizeof(TreeNode));
    TreeNode* five = (TreeNode*) malloc(sizeof(TreeNode));
   
    zero->val = 0;
    one->val = 9;
    two->val = 2;
    three->val = 3;
    four->val = 4;
    five->val = 5;
    six->val = 6;
    seven->val = 7;
    eight->val = 8;

    three->left = five; three->right = one;
    five->left = six; five->right = two;
    one->left = zero; one->right = eight;
    six->left = NULL; six->right = NULL;
    two->left = seven; two->right = four;
    zero->left = NULL; zero->right = NULL;
    eight->left = NULL; eight->right = NULL;
    seven->left = NULL; seven->right = NULL;
    four->left = NULL; four->right = NULL;

    Solution sol;
    TreeNode* lca = sol.lowestCommonAncestor(three, six, four);
    cout << lca->val << endl;
}
