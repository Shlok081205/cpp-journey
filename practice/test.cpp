#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 3, 1, 4, 2};
    sort(nums.begin(), nums.end());
    
    cout << "C++ is working! Sorted: ";
    for (int n : nums) cout << n << " ";
    cout << endl;
    return 0;
}