1class Solution {
2public:
3    vector<int> getAverages(vector<int>& nums, int k) {
4       int i=0;
5       int n =nums.size();
6       vector<int> ans(n,-1);
7       long long sum = 0;
8       for(int i=0;i<n;i++){
9           sum += nums[i];
10           if(i >= 2*k){
11               ans[i-k] = sum/(2*k+1);
12               sum -= nums[i-2*k];
13           }
14       }
15       return ans;  
16    }
17};