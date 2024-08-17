class Solution {
public:
    int xorOperation(int n, int start) {
        int bitXOR=0;
        for (int i=0; i<n; i++){
            int val = start + 2*i;
            bitXOR = bitXOR^val;
        }
        return bitXOR;
    }
};