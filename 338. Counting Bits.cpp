class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans(n + 1);
        for (int i = 0; i <= n; ++i) {
            int count = 0;
            for (int temp = i; temp != 0; count += 1) {
                temp &= (temp - 1);
            }
            ans[i] = count;
        }
        return ans;
    }
};
