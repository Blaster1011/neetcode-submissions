class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> ch;
        if (s.size() != t.size()){
            return false;
        }
        for (char c:s){
            ch[c]++;
        }
        for(char c:t){
            ch[c]--;

            if(ch[c] < 0){
                 return false;
            }
        }

        
        return true;
    }
};
