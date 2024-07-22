#include <iostream>
#include <algorithm>
#include <vector>
class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        while(i>=0 && nums[i] >= nums[i+1])
            i--;
        if(i>=0)
        {
            int j = n-1;
            while(j>=0 && nums[j] <= nums[i])
                j--;
            std::swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+i+1, nums.end());
    }
};

int main()
{
    Solution obj;
    std::vector<int> arr = {3,2,1};
    obj.nextPermutation(arr);
    for(int i=0; i<arr.size(); i++)
        std::cout<<arr[i];
    std::cout<<std::endl;
    return 0;
}