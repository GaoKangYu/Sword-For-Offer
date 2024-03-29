﻿/*
Day2
剑指 Offer 59 - II. 队列的最大值

请定义一个队列并实现函数 max_value 得到队列里的最大值，要求函数max_value、push_back 和 pop_front 的均摊时间复杂度都是O(1)。
若队列为空，pop_front 和 max_value 需要返回 -1

示例 1：
输入:
["MaxQueue","push_back","push_back","max_value","pop_front","max_value"]
[[],[1],[2],[],[],[]]
输出: [null,null,null,2,1,2]

示例 2：
输入:
["MaxQueue","pop_front","max_value"]
[[],[],[]]
输出: [null,-1,-1]
 

限制：
1 <= push_back,pop_front,max_value的总操作数 <= 10000
1 <= value <= 10^5
*/

/*
思路
*/

#include <iostream>
#include <queue>

using namespace std;

class MaxQueue {
public:
	MaxQueue() {

	}

	int max_value() {
		if (max_value_d.empty()) {
			return -1;
		}
		return max_value_d.front();
	}

	void push_back(int value) {
		q.push(value);
		while (!max_value_d.empty() && max_value_d.back() < value) {
			max_value_d.pop_back();
		}
		max_value_d.push_back(value);
	}

	int pop_front() {
		if (q.empty()) {
			return -1;
		}
		int tmp = q.front();
		if (tmp == max_value_d.front()) {
			max_value_d.pop_front();
		}
		q.pop();
		return tmp;
	}

private:
	queue<int> q;
	deque<int> max_value_d;
};

int main() {

}
