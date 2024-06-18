#include <iostream>
#include <vector>
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int i,j=1;
        for(i=1; i < nums.size();i++)
        {
            if(j==1 || nums[i]!=nums[j-2])
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};

int main()
{
    Solution obj;
    std::vector<int> n = {0,0,1,1,1,1,2,3,3};
    int s = obj.removeDuplicates(n);
    std::cout<<s<<std::endl;
    for ( int i = 0; i < s; i++)
        std::cout<<n[i];
    std::cout<<std::endl;
    return 0;
}