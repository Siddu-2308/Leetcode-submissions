class Solution {
public:
    int appendCharacters(string s, string t) {
        int tlen=t.length();//6
        int slen=s.length();//8
        //coaching
        //coding
        int i=0;
        int j=0;
        int match=0;;
        while(i<slen && j<tlen){
            if(t[j]==s[i]){
                match++;
                j++;
                i++;
            }
            else{
                i++;
            }
        }
        return tlen-match;
        
    }
};