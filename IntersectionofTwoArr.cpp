#include <vector>
#include <iostream>
#include <algorithm>
class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector <int> res ;
        int p1=0, p2=0, i=0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while( p1 < nums1.size() && p2 < nums2.size())
        {
            if(nums1[p1]<nums2[p2])
                ++p1;
            else if(nums1[p1]>nums2[p2])
                ++p2;
            else
            {    
                res.push_back(nums1[p1]);
                ++p1;
                ++p2;
            }

        }
        return res;
    }
};
int main()
{
    Solution obj;
    std::vector <int> num1 = {1,2,2,1} , num2 = {2,2};
    std::vector <int> res = obj.intersect(num1,num2);
    for(int i=0; i<res.size(); i++)
        std::cout<<res[i];
    std::cout<<std::endl;
    return 0;
}