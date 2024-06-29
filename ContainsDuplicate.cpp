#include <vector>
#include <iostream>
#include <algorithm>
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-1;i++)
       {
            if(nums[i]==nums[i+1])
                return true;
       }
       return false;
    }
};

int main()
{
    Solution obj;
    std::vector<int> num = {1,2,3,1};
    bool ans = obj.containsDuplicate(num);
    if(ans>0)
        std::cout<<"true";
    else
        std::cout<<"false";
    return 0;
}