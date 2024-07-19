#include <iostream>
#include <vector>
float solve(int n, std::vector<int> arr, int x, int y){
    float s=0.0, c=0.0;
    for(int i=x; i<=y; i++)
    {
        s=s+arr[i];
        ++c;
    }
    float avg = s/c;
    return avg;
}

int main()
{
    int s, a, b;
    float average;
    std::vector<int> Arr (s);
    std::cin>>s;
    for(int i=0 ;i<s; i++)
        std::cin>>Arr[i];
    std::cin>>a;
    std::cin>>b;
    average = solve(s, Arr, a, b);
    std::cout<<average;
    return 0;
}