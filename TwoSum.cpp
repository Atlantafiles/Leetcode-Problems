#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    std::vector<int> twoSum( std::vector<int>& nums, int target) {
        int i,j, numsSize = nums.size();
        for (i=0; i<numsSize; i++)
        {
            for( j=i+1; j< numsSize; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i,j};
                }  
            }
        } 
        return {};
    }
};

int main()
{
    Solution ob1;
    std::vector<int> nums = {2,7,11,9};
    int target = 18;
    std::vector<int>n = ob1.twoSum(nums, target);
    std::cout<< n[0] << ", " << n[1] << std::endl;
    return 0;
}