#include <iostream>
#include <algorithm>
#include <vector>
class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int n = nums.size(), i, j;
        for(i=n-2; i>=0; i--)
        {
            if(nums[i] < nums[i+1])
                break;
        }
        if(i < 0)
            reverse(nums.begin(), nums.end());
        else
        {
            for(j = n-1; j>=0; j--)
            {
                if(nums[j] > nums[i])
                    break;
            }
            std::swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1, nums.end());
        }
    }
};

int main()
{
    Solution obj;
    std::vector<int> arr = {1,3,5,4,2};
    obj.nextPermutation(arr);
    for(int i=0; i<arr.size(); i++)
        std::cout<<arr[i];
    std::cout<<std::endl;
    return 0;
}
