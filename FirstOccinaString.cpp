#include <string>
#include <iostream>
class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if(haystack.length()<needle.length())
            return -1;
        for(int i=0; i<haystack.length(); i++)
        {   
            if (haystack.substr(i,needle.length()) == needle)
                return i;
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    std::string a,b;
    std::cout<<"Enter any string: ";
    std::cin>>a;
    std::cout<<"Enter the substring you want to find in the first string: ";
    std::cin>>b;
    int res = obj.strStr(a,b);
    std::cout<<res;
    return 0;
}