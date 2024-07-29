#include <iostream>
#include <vector>
#include <algorithm>
class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
        if(intervals.empty())
            return {};
        sort(intervals.begin(),intervals.end());
        std::vector<std::vector<int>> answer;
        answer.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); ++i)
        {
            std::vector<int> &last = answer.back();
            if(last[1] >= intervals[i][0])
                last[1]=std::max(last[1],intervals[i][1]); 
            else
                answer.push_back(intervals[i]);
        }
        return answer;
    }
};
int main()
{
    Solution obj;
    std::vector<std::vector<int>> num = {{1,3},{2,6},{8,10},{15,18}};
    std::vector<std::vector<int>> res = obj.merge(num);
    for(int i=0; i < res.size(); i++)
    {    
        std::cout<<res[i][0];
        std::cout<<res[i][1];
    }
    std::cout<<std::endl;
    return 0;
}