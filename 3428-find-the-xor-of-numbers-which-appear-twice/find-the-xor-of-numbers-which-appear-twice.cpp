class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> valF;
        for (int i=0; i<nums.size(); i++){
            valF[nums[i]]++;
        }
        int xorResult;
        int firstTime=1;
        for (auto i:valF){
            if (i.second==2 && firstTime==1){
                firstTime=0;
                xorResult=i.first;
            } else if (i.second==2){
                xorResult=xorResult^i.first;
            }
        }
        if (firstTime==1) return 0;
        return xorResult;
    }
};