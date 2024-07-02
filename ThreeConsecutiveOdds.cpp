#include <vector>
#include <iostream>
class Solution {
public:
    bool threeConsecutiveOdds(std::vector<int>& arr) {
        if(arr.size()<3)
            return false;
        for(int i=0;i<arr.size()-2;i++)
        {
            if(arr[i]%2==1)
            {
                if(arr[i+1]%2==1 && arr[i+2]%2==1)
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution obj;
    std::vector<int> ar = {1,2,3,1};
    bool ans = obj.threeConsecutiveOdds(ar);
    if(ans>0)
        std::cout<<"true";
    else
        std::cout<<"false";
    return 0;
}