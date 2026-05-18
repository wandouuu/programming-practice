class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complement; // value, idx
        int com{};
        for(auto [index, num] : std::views::enumerate(nums)){
            com = target - num;
            if(complement.contains(num)){
                return {complement[num], static_cast<int>(index)};
            }

            complement[com] = index;
        }

        return {complement[nums.size()-1], static_cast<int>(nums.size()-1)};
    }
};