class Solution {
public:
    void reverseString(vector<char>& s) {
        auto i=s.begin();
        auto j=s.end()-1;
        while(i<j){
            swap(*i,*j);
            i++;
            j--;
        }
    }
};