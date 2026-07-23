class Solution {
public:
    void sortColors(vector<int>& nums) {
        //ducth national flag algorithm
        //refer to striver
        //for three colours we use three variables
        //0 - low-1 ---> 0's
        //low - mid-1 ---> 1's
        //mid - high---> unsorted   (imp)
        //high+1 ABOVE---->2's

        //0,0,0,0,1,1,1,(a,b,c,d),2,2,2,2

        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            //suppose if a is 0
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }

        
    }
};