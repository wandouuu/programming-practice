class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()){
            return false;
        }
        
        unordered_map<char, int> letters_s;
        unordered_map<char, int> letters_t;

        for(std::size_t i = 0; i < s.length(); i++){
            if(letters_s.contains(s[i])){
                letters_s[s[i]] += 1;
            } else{
                letters_s[s[i]] = 1;
            }

            if(letters_t.contains(t[i])){
                letters_t[t[i]] += 1;
            } else{
                letters_t[t[i]] = 1;
            }
        }

        if(letters_s == letters_t){
            return true;
        }
        return false;
        
    }
};