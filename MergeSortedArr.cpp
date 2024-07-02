#include <iostream>
#include <vector>
#include <algorithm>
class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        for(int i = 0; i<nums1.size(); i++)
        {
            if (i == (m-1))
            {   for(int j=0; j<n; j++)
                    nums1[++i]=nums2[j];
            }
            else if (m<n)
                while(n--)
                    nums1[m++]=nums2[n];
        }   
        std::sort(nums1.begin(), nums1.end());
    }
};

int main()
{
    Solution obj;
    std::vector < int> num1 = {1,2,3,0,0,0} , num2 = {2,5,6};
    int a = 3, b = 3;
    obj.merge(num1,a,num2,b);
    for (int i = 0; i < num1.size(); i++)
        std::cout<<num1[i];
    std::cout<<std::endl;
    return 0;
}