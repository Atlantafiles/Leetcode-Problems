#include <vector>
#include <iostream>
#include <algorithm>
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int temp = prices[0], res=0;
        for(int i = 1; i < prices.size(); i++)
        {
            if(temp > prices[i])   
                temp = prices[i];
            else
                res = std::max(res, prices[i]-temp);
        }   
        return res;
    }
};

int main()
{
    Solution obj;
    std::vector <int> num = {2,4,1};
    int res = obj.maxProfit(num);
    std::cout<<res;
    return 0;
}