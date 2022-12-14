#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < nums.size(); j++) {
        if (i != j && ((nums[i] + nums[j]) == target)) {
          result.push_back(i);
          result.push_back(j);
          return result;
        }
      }
    }
    return result;
  }
};

int main() {
  vector<int> nums = {3, 3};
  int target = 6;
  Solution* s = new Solution;
  vector<int> result = s->twoSum(nums, target);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << ' ';
  }

  return 0;
};