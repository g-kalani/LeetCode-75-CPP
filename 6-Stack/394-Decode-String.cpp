class Solution {
public:
    string decode(const string& s, int& i){
        string res="";
        int num=0;
        while(i<s.size()){
            char c=s[i];
            if(isdigit(c)){
                num=num*10+(c-'0');
                i++;
            } else if(c=='['){
                i++;
                string inner=decode(s,i);
                for(int k=0; k<num; k++) res+=inner;
                num=0;
            } else if(c==']'){
                i++;
                return res;
            } else{
                res+=c;
                i++;
            }
        }
        return res;
    }

    string decodeString(string s) {
        int i=0;
        return decode(s,i);
    }
};
