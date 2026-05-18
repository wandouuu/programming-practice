class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> mySet = {};

        for(auto num : nums){
            if(mySet.find(num) != mySet.end()){
                return true;
            }

            mySet.insert(num);
            
        }

        return false;
    }
};