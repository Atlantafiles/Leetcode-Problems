#include <iostream>
#include <vector>
#include <map>
int solve(int n, std::vector<int> nums){
    std::map <int, int> mpp;
    int res;
    for(int i=0; i<n; i++)
        mpp[nums[i]]++;
    for(auto it:mpp)
    {
        if(it.second == 1)
            res = it.first;
    }
    return res;
}

int main()
{
    int s;
    std::cin>>s;
    std::vector<int> num (s);
    for(int i=0; i<s; i++)
        std::cin>>num[i];
    int ans = solve(s,num);
    std::cout<<ans;
    return 0;    
}