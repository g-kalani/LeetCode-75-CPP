class Solution {
public:

    bool vow(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }

    int maxVowels(string s, int k) {
        int l=0, r=0, vcnt=0, ans=0;
        while(r<s.size()){
            if(vow(s[r])) vcnt++;
            if(r-l+1>k){ //exceeding window
                if(vow(s[l])) vcnt--;
                l++;
            }
            ans=max(ans,vcnt);
            r++;
        }
        return ans;
    }
};