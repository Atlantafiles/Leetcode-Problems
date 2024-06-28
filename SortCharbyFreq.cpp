#include <vector>
#include <string>
#include <map>
#include <queue>
#include <iostream>
class Solution {
public:
    std::string frequencySort(std::string s) {
       std::map<char,int> mpp;
       std::priority_queue<std::pair<int,char>> pp;
       std::string res="";
    for(int i=0; i<s.length();i++)
        mpp[s[i]]++;

    for(auto it:mpp)
        pp.push({it.second,it.first});

    while(!pp.empty())
    {
        auto temp=pp.top();
        int freq=temp.first;
        char ch=temp.second;
        res=res+std::string(freq,ch);
        pp.pop();
    }
    return res;
    }
};

int main()
{
    Solution obj;
    std::string s;
    std::cout<<"Enter the string: ";
    std::cin>>s;
    std::string res = obj.frequencySort(s);
    std::cout<<res;
}