class Solution {
public:
    void rotatep(vector<int>& nums, int i,int j){
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        //Fix: Add k = k % n; before performing any index calculations.
        int n=nums.size();
        k=k%n;
    
        rotatep(nums,n-k,n-1);
        rotatep(nums,0,n-1-k);
        rotatep(nums,0,n-1);
    }
};