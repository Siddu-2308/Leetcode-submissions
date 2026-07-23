class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        // 1. Array MUST be sorted for two-pointer approach
        sort(nums.begin(), nums.end());

        for(int i=0;i<n;i++){
            //fixing pointers
            int j=i+1;
            int k=n-1;
           // int sum=nums[i]+nums[j]+nums[k];
            //no repeated i
            if(i>0 && nums[i]==nums[i-1])continue;
            //moving pointers
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    //add to res list
                    res.push_back({nums[i],nums[j],nums[k]});
                    

                    // Skip duplicates for left
                    while (j < k && nums[j] == nums[j +1]) j++;
                    // Skip duplicates for right
                    while (j < k && nums[k] == nums[k -1]) k--;
                    j++, k--;
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    k--;
                }
            }


        }
        return res;
    }
};