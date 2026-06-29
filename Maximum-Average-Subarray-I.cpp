1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int sum = 0;
5
6        for (int i = 0; i < k; i++)
7            sum += nums[i];
8
9        int maxSum = sum;
10
11        
12        for (int i = k; i < nums.size(); i++) {
13            sum += nums[i];
14            sum -= nums[i - k];
15            maxSum = max(maxSum, sum);
16        }
17
18        return (double)maxSum / k;
19    }
20};