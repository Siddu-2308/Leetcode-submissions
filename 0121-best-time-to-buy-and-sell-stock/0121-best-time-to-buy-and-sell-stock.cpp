class Solution {
public:
    int maxProfit(vector<int>& nums) {
        //logic is that 3-min[7,1,5]  is the profit when i is at 3
        //we need to maximize that profit..
        int mini=nums[0];
        int profit=0;
        for(int i=1;i<nums.size();i++){
            profit=max(profit,nums[i]-mini);//maximize profit
            mini=min(mini,nums[i]);//update mini
        }
        return profit;
    }
};