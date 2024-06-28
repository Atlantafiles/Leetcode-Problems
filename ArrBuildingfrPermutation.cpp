#include <vector>
#include <iostream>
class Solution {
public:
    std::vector<int> buildArray(std::vector<int>& nums) {
        std::vector<int> ans (nums.size());
        for(int i=0; i<nums.size() ;i++)
            ans[i] = nums[nums[i]];
        return ans;
    }
};

int main()
{
    Solution obj;
    std::vector<int> res, nums;
    nums = {0,2,1,5,3,4};
    res = obj.buildArray(nums);
    for (int i = 0; i < res.size(); i++)
        std::cout<<res[i];
    std::cout<<std::endl;
    return 0;
}