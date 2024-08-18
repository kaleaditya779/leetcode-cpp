class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xOR=nums[0];
        for (int i=1; i<nums.size(); i++){
            xOR = xOR ^ nums[i];
        }
        if (xOR == k) return 0;
        cout<<endl<<"xor : "<<xOR;
        int opCount=0;
        while ((k!=0 || xOR!=0)){
            int k1 = k&1;
            int x1 = xOR&1;
            cout<<endl<<xOR<<" : "<<k;
            xOR = xOR>>1;
            k = k>>1;
            cout<<endl<<xOR<<" : "<<k;
            if (x1!=k1)  {
                opCount++;
            }
            
            
        }
        return opCount;
    }
};