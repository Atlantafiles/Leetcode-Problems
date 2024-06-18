#include <iostream>
#include <stdio.h>
#include <vector>
class Solution {
public:
    void sortColors(std::vector<int>& nums) {
    int i,j,l,k;
    for ( i=1 ; i<nums.size(); i++)
    {
        k = nums[i];
        j = i-1;
        while (j>=0 && k<nums[j])
        {
            nums[j+1]=nums[j];
            j-=1;
        }
        nums[j+1]=k;
    }
    for ( l =0; l<nums.size(); l++)
        std::cout<<nums[l];
    std::cout<<std::endl;
    }
};

int main()
{
    Solution obj;
    std::vector<int> n = {2,0,2,1,1,0}; 
    obj.sortColors(n);
    return 0;
}