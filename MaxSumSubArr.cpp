#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
int solve(int n, std::vector<int> arr){
    int sum = INT_MIN;
    int max_sum = 0;
    for(int i=0; i<n; i++)
    {
        max_sum = std::max(arr[i], max_sum + arr[i]);
        sum = std::max(max_sum, sum);
        if(max_sum < 0)
            max_sum = 0;
    }
    return sum;
}

int main()
{
    int s, res;
    std::cin>>s;
    std::vector <int> num (s);
    for(int i=0; i<s; i++)
        std::cin>>num[i];
    res = solve(s, num);
    std::cout<<"The maximum sum subarray is: "<<res;
    return 0;
}