class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int maj;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                maj=nums[i];
            }
            else if(maj==nums[i]){
                cnt++;
            }else{
                cnt--;
            }
        }
        return maj;
    }
};