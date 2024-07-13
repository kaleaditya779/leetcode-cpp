class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        for (int i=1; i<=n; i++) {
            bool divi3 = (i%3 == 0);
            bool divi5 = (i%5 == 0);
            if (divi3 && divi5) {
                ans[i-1] = "FizzBuzz";
            } else if (divi3) {
                ans[i-1] = "Fizz";
            } else if (divi5) {
                ans[i-1] = "Buzz";
            } else {
                ans[i-1] = to_string(i);
            }
        }
        return ans;
    }
};