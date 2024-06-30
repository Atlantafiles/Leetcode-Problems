#include <vector>
#include <iostream>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while (numbers[i]+numbers[j]!=target)
        {
            if( numbers[i]+numbers[j]<target){
                i++;
            } else {
                j--;
            }
        }
        return std::vector<int>({i+1,j+1});
    }
};

int main()
{
    Solution obj;
    std::vector<int> nums = {2,3,4};
    std::vector<int> res = obj.twoSum(nums,6);
    for(int i=0; i<res.size(); i++)
        std::cout<<res[i];
    std::cout<<std::endl;
    return 0;
}