﻿/*
Day2
题目描述
*/

/*
思路
*/

#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (!root) {
			return 0;
		}
		int left_depth = maxDepth(root->left);
		int right_depth = maxDepth(root->right);
		return max(left_depth, right_depth) + 1;
	}
};

int main() {

}
