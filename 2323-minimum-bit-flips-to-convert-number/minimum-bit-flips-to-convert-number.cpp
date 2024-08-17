class Solution {
public:
    int minBitFlips(int start, int goal) {
        int bitFlipCount=0;
        for (int i=0; i<32; i++){
            int val = 1<<i;
            if ((start & val) == (goal & val)) {
                // no bitflip required.
                cout<<"No";
                continue;
            } else {
                bitFlipCount++;
            }
        }
        return bitFlipCount;
    }
};