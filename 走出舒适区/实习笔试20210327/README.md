# 20210327
- 根据草稿本记录整理而成
```
建议改名:第 7 8 次 失 败
```
- 经验总结：笔试失败，经验不足。在第一题花费了太多时间仍没有思路，后面的三题有思路但不熟悉ACM模式（不提示哪个样例不通过、自处理输入输出）花费了一定时间，没有足够的时间优化或改进，最后一道编程题十分简单但当时仅剩下20分钟，简答题还未开始。后续笔试需先看题，从易到难，合理分配时间。

- 编程题通过率：编译未通过  60%  10%  编译未通过


## 编程题
### 受污染影响最小的地方

```
description
```

### 最大和问题

```
description
```

### 减满问题

```
description
```

### 3次方回文

```
一个正整数自身是回文，同时是它某个回文数的三次方，那么它就是三次方回文数。
输入一组单调递增的数，找出其中的三次方回文数，如果没有找到则返回[]。
输入第一行为起始数字，第二行为结束数字。
```

- 03.29思路：遍历+判断，判断值是否为三次方回文，再开三次根号，判断是不是回文。
- 估计超时了
- 解答：[cubic_palindrome](https://github.com/GaoKangYu/Sword-For-Offer/blob/main/%E8%B5%B0%E5%87%BA%E8%88%92%E9%80%82%E5%8C%BA/%E7%BD%91%E6%98%93%E6%9C%89%E9%81%93C%2B%2B%E5%BC%80%E5%8F%91%E5%AE%9E%E4%B9%A0%E7%94%9F%E7%AC%94%E8%AF%9520210327/cubic_palindrome/cubic_palindrome.cpp)
- 核心代码
```
//使用sstream实现int转string
#include <sstream>
//开三次方
#include <math.h>
...
		//使用sstream实现int转string
		stringstream strStream;
		for (int n : input){
			//读int加入缓冲区
			strStream << n;
			//转string
			string s = strStream.str();
			//清空缓冲区，很重要
			strStream.str("");
			//开三次方，1.0而不是1
			strStream << pow(n, 1.0 / 3);
...
```

## 简答题
- 内存对齐的含义及其意义？
- dynamic_cast、static_cast的区别及对应的适用场景。
