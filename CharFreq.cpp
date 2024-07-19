#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
std::vector<int> solve(std::string str1){
    std::vector<int> res;
    std::unordered_map <char,int> mpp;
    std::vector<int> order;
    for(int i=0; i<str1.length(); i++)
    {
        if(mpp[str1[i]] == 0)
            order.push_back(str1[i]);
        mpp[str1[i]]++;
    }
    for(auto it:order)
        res.push_back(mpp[it]);
    return res;
}
int main()
{
    std::string str;
    std::vector<int> Arr;
    std::cin>>str;
    Arr = solve(str);
    for(int i=0; i<Arr.size(); i++)
        std::cout<<Arr[i];
    std::cout<<std::endl;
    return 0;
}