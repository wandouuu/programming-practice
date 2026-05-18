class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()){
            return true;
        }

        std::size_t left = 0;
        std::size_t right = s.length() - 1;

        while(left < right && right >= 0 && left < s.length()){
            if(!isalnum(s[left])){
                left++;
            } else if(!isalnum(s[right])){
                right--;
            } else{
                if(tolower(s[left]) != tolower(s[right])){
                    return false;
                }
                right--;
                left++;
            }
        }

        return true;

    }
};