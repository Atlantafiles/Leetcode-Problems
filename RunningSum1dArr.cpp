#include <vector>
#include <iostream>

class Solution {
public:
    std:: vector<int> runningSum(std:: vector<int>& nums) {
        int i,sum = 0;
        for(i=0; i<nums.size(); i++)
        {
            sum=sum+nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};

int main()
{
    Solution obj;
    std:: vector<int> res ;
    std:: vector<int> num = {1,2,3,4};
    res = obj.runningSum(num);
    for ( int i=0; i<res.size(); i++)
        std::cout<<res[i];
    std::cout<<std::endl;
    return 0;
}
