//tc-O(n)
//SC-O(n)
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0, n = 1;

        vector<int> ans(nums.size(), 0);

        for(int num : nums) {

            if(num > 0) {
                ans[p] = num;
                p += 2;
            }
            else {
                ans[n] = num;
                n += 2;
            }
        }

        return ans;
    }
};
