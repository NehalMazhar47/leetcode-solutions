// Created by nehalmazhar0 at 2026/08/15 16:10
// leetgo: 1.4.17
// https://leetcode.com/problems/add-two-numbers/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	ListNode* l1;
	LeetCodeIO::scan(cin, l1);
	ListNode* l2;
	LeetCodeIO::scan(cin, l2);

	Solution *obj = new Solution();
	auto res = obj->addTwoNumbers(l1, l2);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
