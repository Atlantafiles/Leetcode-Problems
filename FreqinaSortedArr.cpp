#include <iostream>
#include <vector>
int countOccurrences(std::vector <int> &arr, int x) {
    int count = 0;
    for (int i=0; i<arr.size(); i++) {
      if (arr[i] == x)
        count++;
    }
    return count;
}

int main()
{
    std::vector <int> Arr = {1,1,2,2,2,2,3,3,4,};
    int target = 2;
    int occ = countOccurrences(Arr,target);
    std::cout<<occ;
    return 0;
}