#include <iostream>
#include <vector>
#include <map>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
class Solution {
public:
    bool hasGroupsSizeX(std::vector<int>& deck) {
        std::map <int,int> count;
        if (deck.empty())
            return false;
        for(int i=0; i<deck.size(); i++)
            count[deck[i]]++;
        int x = count.begin()->second;
        for(auto it: count){
            x = gcd(x,it.second);
            if(x == 1)
                return false;
        }
        return true;
    }
};

int main()
{
    Solution obj;
    std::vector<int> arr = {1,2,2,3,4,1,3,4};
    bool answer = obj.hasGroupsSizeX(arr);
    std::cout<<answer;
    return 0;
}