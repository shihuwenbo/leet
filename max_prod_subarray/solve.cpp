#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        if(nums.size() <= 1) {
            return nums[0];
        }

        int max_keep = nums[1]*nums[0];
        int max_skip = nums[0];

        for(int i=2; i<nums.size(); i++) {

            cout << max_keep << " " << max_skip << endl;

            int tmp = nums[i]*max_keep;
            int max_keep_new = nums[i]>tmp ? nums[i] : tmp;
            int max_skip_new = max_keep>max_skip ? max_keep : max_skip;
            
            max_keep = max_keep_new;
            max_skip = max_skip_new;
        }

        cout << max_keep << " " << max_skip << endl;

        int ret_val = max_keep>max_skip ? max_keep : max_skip;

        return ret_val;
    }
};

int main() {
    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(-1);
    nums.push_back(-2);
    Solution sol;
    cout << sol.maxProduct(nums) << endl;
}
