#include <iostream>
#include <algorithm>
#include <vector>
int solve(int n, std::vector<int> arr){
    sort(arr.begin(), arr.end());
    int min_ele = -1;
    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]<arr[n-1])
        {    
            min_ele = arr[i];
            break;
        }
    }
    return min_ele;
}

int main()
{
    int s;
    std::cin>>s;
    std::vector<int> num (s);
    for(int i=0; i<s; i++)
        std::cin>>num[i];
    int res = solve(s, num);
    std::cout<<"THe Second Largest Element is: "<<res;
    return 0;
}