
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                return i;
            }
        }
        return nums.size();
    }
};

int main() {
    vector<int> nums = {3, 0, 1};  
    Solution sol;
    cout << "Missing number: " << sol.missingNumber(nums) << endl;
    return 0;
}




