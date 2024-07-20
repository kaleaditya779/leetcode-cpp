class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int countMetTarget = 0;
        for (auto i:hours){
            if (i>=target) countMetTarget++;
            else continue;
        }
        return countMetTarget;
    }
};