class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        if(nums.size() == 1){
            return {nums[0]};
        }
        
        unordered_map<int, int> counter; // number, count

        for(const auto& num : nums){
            if(counter.contains(num)){
                counter[num] += 1;
            } else{
                counter[num] = 1;
            }
        }

        // Creating a vector from map
        std::vector<std::pair<int, int>> k_freq(counter.begin(), counter.end());

        // Sort in ascending order based on the second element
        std::sort(k_freq.begin(), k_freq.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
        });

        std::vector<int> tmp{};
        
        for(auto x : k_freq){
            tmp.push_back(x.first);
        }

        return std::vector<int>(tmp.begin(), tmp.begin() + k);
        
    }
};