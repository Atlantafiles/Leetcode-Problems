#include <iostream>
#include <vector>
class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int r,l,mid;
        r = nums.size()-1;
        l = 0;
        while(r > l)
        {
            mid = (l+r)/2;
            if (nums[mid] > nums[r])
                l = mid + 1;
            else
                r = mid;
        }
        return nums[l];
    }
};

int main()
{
    Solution obj;
    std::vector<int> num = {3,4,5,6,0,1,2};
    int res = obj.findMin(num);
    std::cout<<res;
    return 0;
}