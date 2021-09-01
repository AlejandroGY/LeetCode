class Solution {
public:
    int fib(int n) {
        int previous = 0, current = 1;
        for (int i = 0; i < n; ++i) {
            int temp = previous + current;
            previous = current; current = temp;
        }
        return previous;
    }
};
