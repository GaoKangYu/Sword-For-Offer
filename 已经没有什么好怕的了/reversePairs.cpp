﻿/*
Day2
剑指 Offer 51. 数组中的逆序对

在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。输入一个数组，求出这个数组中的逆序对的总数。

示例 1:
输入: [7,5,6,4]
输出: 5
 

限制：
0 <= 数组长度 <= 50000
*/

/*
并归排序，背下来
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int reversePairs(vector<int>& nums) {
		vector<int> tmp(nums.size());
		return mergeSort(0, nums.size() - 1, nums, tmp);
	}
private:
	int mergeSort(int l, int r, vector<int>& nums, vector<int>& tmp) {
		// 终止条件
		if (l >= r) return 0;
		// 递归划分
		int m = (l + r) / 2;
		int res = mergeSort(l, m, nums, tmp) + mergeSort(m + 1, r, nums, tmp);
		// 合并阶段
		int i = l, j = m + 1;
		for (int k = l; k <= r; k++)
			tmp[k] = nums[k];
		for (int k = l; k <= r; k++) {
			if (i == m + 1)
				nums[k] = tmp[j++];
			else if (j == r + 1 || tmp[i] <= tmp[j])
				nums[k] = tmp[i++];
			else {
				nums[k] = tmp[j++];
				res += m - i + 1; // 统计逆序对
			}
		}
		return res;
	}
};


int main() {
	Solution solu;
	vector<int> input{7,5,6,4};
	int res = solu.reversePairs(input);
	cout << "Res : " << res << endl;
}
