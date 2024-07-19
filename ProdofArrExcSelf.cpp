#include <iostream>
#include <vector>
class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> answer (nums.size());
        std::vector<int> left (nums.size());
        std::vector<int> right (nums.size());
        left[0] = 1;
        for(int i=1; i<nums.size(); i++)
            left[i]=left[i-1] * nums[i-1];
        right[nums.size()-1] = 1;
        for(int i=nums.size()-2; i>=0; i--)
            right[i]=right[i+1] * nums[i+1];
        for(int i=0; i<nums.size(); i++)
            answer[i] = left[i] * right[i];
        return answer;
    }
};

int main()
{
    Solution obj;
    std::vector<int> res, num = {1,2,3,4};
    res = obj.productExceptSelf(num);
    for(int i=0; i<res.size(); i++)
        std::cout<<res[i];
    std::cout<<std::endl;
    return 0;
}