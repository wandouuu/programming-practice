class Solution {
public:
    int search(vector<int>& nums, int target) {
        std::size_t left{};
        std::size_t right{nums.size()};

        while(left != right){
            
            std::size_t mid{(left+right)/2};

            if(nums[mid] == target){
                return mid;
            } else if(target > nums[mid]){
                left = mid + 1;
            } else{
                right = mid;
            }

        }

        return -1;



    }
};