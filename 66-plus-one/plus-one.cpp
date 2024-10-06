class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        if (digits[n-1] != 9) {
            digits[n-1] += 1;
            return digits;
        }

        int nineCounts = 0;
        for (int i=0; i<n; i++){
            if (digits[i]==9){
                nineCounts++;
            }
        }
        if (nineCounts == n) {
            // means all digits in array are 9
            digits[0] = 1;
            for (int i=1; i<n; i++){
                digits[i]=0;
            }
            digits.push_back(0);
            return digits;
        }

        for (int i=n-1; i>=0; i--){
            if (digits[i]==9){
                digits[i]=0;
            } else {
                digits[i]++;
                break;
            }
        }
        return digits;
    }
};