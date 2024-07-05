#include <iostream>
#include <vector>
class Solution {
public:
    std::vector<int> finalPrices(std::vector<int>& prices) {
        std::vector <int> answer(prices.size());
        for(int i=0; i<prices.size(); ++i)
        {
            answer[i]=prices[i];
            for(int j = i+1; j<prices.size(); ++j)
            {    
                if(prices[j] <= prices[i] )
                {   
                    answer[i]=answer[i] - prices[j];
                    break;
                }
            }
        }
        return answer;
    }
};

int main()
{
    Solution obj;
    std::vector<int> price = {8,4,6,2,3};
    std::vector<int> ans = obj.finalPrices(price);
    for(int i=0; i<ans.size(); i++)
        std::cout<<ans[i];
    std::cout<<std::endl;
    return 0;
}