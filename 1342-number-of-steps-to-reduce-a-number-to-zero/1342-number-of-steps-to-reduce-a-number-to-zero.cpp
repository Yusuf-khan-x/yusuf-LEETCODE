class Solution {
public:
    int numberOfSteps(int num) {
        if (num <= 2) return num;
        int steps = 0;
        while (num > 0) {
            steps += (num % 2) + 1;
            num /= 2;
        }
        return steps - 1;
    }
};