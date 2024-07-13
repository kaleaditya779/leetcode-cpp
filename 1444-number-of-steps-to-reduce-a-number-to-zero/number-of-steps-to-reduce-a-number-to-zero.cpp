class Solution {
public:
    int numberOfSteps(int num) {
        int stepCount = 0;
        while (num != 0) {
            if (num%2 == 0) {
                num = num/2;
                stepCount++;
            } else {
                num = num-1;
                stepCount++;
            }
        }
        return stepCount;
    }
};