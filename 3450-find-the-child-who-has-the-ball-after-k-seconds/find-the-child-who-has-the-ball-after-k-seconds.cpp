class Solution {
public:
    int numberOfChild(int n, int k) {
        int j=0;
        int ballPosition=0;
        int flag=0;
        while (j<k){
            if (ballPosition == n-1) flag = 1;
            if (ballPosition == 0) flag = 0;

            if (flag == 1) ballPosition--;
            else if (flag == 0) ballPosition++;
            j++;
        }
        return ballPosition;
    }
};