#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void helper(struct TreeNode* root, int& max_left, int& min_right) {
    if(root == NULL) {
        return;
    }
    int max_left2 = INT_MIN, min_right2 = INT_MAX;
    helper(root->left, max_left2, min_right2);
    helper(root->right, 
}

bool isValidBST(struct TreeNode* root) {
    if(root == NULL) {
        return true;
    }
    return false;
}

int main() {
    struct TreeNode* six = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    struct TreeNode* two = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    struct TreeNode* eight = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    struct TreeNode* zero = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    struct TreeNode* four = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    struct TreeNode* seven = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    struct TreeNode* nine = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    struct TreeNode* three = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    struct TreeNode* five = (struct TreeNode*) malloc(sizeof(struct TreeNode));

    six->val = 6;
    six->left = two;
    six->right = eight;
    
    two->val = 2;
    two->left = zero;
    two->right = four;

    eight->val = 8;
    eight->left = seven;
    eight->right = nine;

    zero->val = 0;
    zero->left = NULL;
    zero->right = NULL;

    four->val = 4;
    four->left = three;
    four->right = five;

    seven->val = 7;
    seven->left = NULL;
    seven->right = NULL;

    nine->val = 9;
    nine->left = NULL;
    nine->right = NULL;

    three->val = 3;
    three->left = NULL;
    three->right = NULL;

    five->val = 5;
    five->left = NULL;
    five->right = NULL;

    printf("%d\n", isValidBST(six));
}
