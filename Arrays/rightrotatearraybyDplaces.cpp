#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Optimal solution
//Time complexity of the solution is O(n) and space complexity is O(1).
class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin() , nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    obj.rotateArray(nums, 3);

    for (int x : nums)
        cout << x << " ";

    return 0;
}