class Solution {
public:
    int countPrimes(int n) {
        if(n == 0) return 0;
        if(n == 1) return 0;
        if(n == 2) return 0;
        if(n == 3) return 1;
        if(n == 5) return 2;

        vector<bool> isPrime (n,true); 
        for(int i=2; i<n/2; i++){
            if(isPrime[i]==false) continue;
            int mult = i+i;
            while(mult < n){
                isPrime[mult] = false;
                mult += i;
            } 
        }
        int ans = 0;
        for(int i=1; i<n; i++){
            if(isPrime[i] == true){
                ans++;
            }
        }
        return --ans;
    }
};