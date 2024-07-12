#include <algorithm>
#include <iostream>
#include <vector>
#include <limits.h>
class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        double prod = INT_MIN;
        double maxprod=1;
        for(int p1 = 0; p1<nums.size(); p1++)
        {    
            maxprod= nums[p1]*maxprod; 
            prod = std::max(prod, maxprod);
            if(maxprod == 0)
                maxprod = 1;
        }
        maxprod = 1;
        for(int p1 = nums.size()-1; p1>=0; p1--)
        {    
            maxprod= nums[p1]*maxprod; 
            prod = std::max(prod, maxprod);
            if(maxprod == 0)
                maxprod = 1;
        }
        return (int) prod;
    }
};

int main()
{
    Solution obj;
    std::vector<int> num = {2,3,-10,6};
    int res = obj.maxProduct(num);
    std::cout<<res;
    return 0;
}