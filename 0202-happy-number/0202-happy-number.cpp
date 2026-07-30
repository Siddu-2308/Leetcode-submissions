class Solution {
public:
    int squ(int num){
        int res=0;
        while(num>0){
            int digit=num%10;
            res+=(digit*digit);
            num=num/10;
        }
        return res;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = squ(n);

        // Loop until fast reaches 1 (happy) OR pointers collide (cycle found)
        while (fast != 1 && slow != fast) {
            slow = squ(slow);               // Move 1 step
            fast = squ(squ(fast));   // Move 2 steps
        }

        return fast == 1;
        //return true;
    }
};