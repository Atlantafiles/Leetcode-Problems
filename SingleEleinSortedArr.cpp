#include <iostream>
#include <vector>
class Solution {
public:
    int singleNonDuplicate(std::vector<int>& nums) {
       int l=0, r=nums.size()-1, mid;
       while(l < r)
       {
            mid = (l+r)/2;
            if( mid%2==0 && nums[mid]==nums[mid+1] || mid%2==1 && nums[mid]==nums[mid-1])
                l=mid+1;
            else
                r=mid;
       }
       return nums[l];
    }
};

int main()
{
    Solution obj;
    std::vector<int> numbers = {1,1,2,3,3,4,4,5,5};
    int res = obj.singleNonDuplicate(numbers);
    std::cout<<res;
    return 0;
}