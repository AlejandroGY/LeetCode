class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> res;
        for (int i = 1; i <= numRows; ++i) {
            long long binomial = 1;
            std::vector<int> temp;
            for (int j = 1; j <= i; ++j) {
                temp.push_back(binomial);
                binomial = binomial * (i - j) / j;
            }
            res.push_back(temp);
        }
        return res;
    }
};
