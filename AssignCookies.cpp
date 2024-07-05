#include <iostream>
#include <vector>
#include <algorithm>
class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        int c=0, p1=0, p2=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(p1<g.size() && p2<s.size())
        {
            if(s[p2] >= g[p1])
            {    
                c=c+1;
                p1++;
            } 
            p2++;  
        }
        return c;
    }
};

int main()
{
    Solution obj;
    std::vector <int> num1 = {1,2,3};
    std::vector <int> num2 = {1,2};
    int res = obj.findContentChildren(num1,num2);
    std::cout<<res;
    return 0;
}