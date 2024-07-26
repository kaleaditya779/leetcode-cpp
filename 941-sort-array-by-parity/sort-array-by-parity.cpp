class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if (nums.size() == 1) return nums;

        bool noFurtherEven=false;
        for (int i=0; i<nums.size()-1; i++){
            if (noFurtherEven) break;
            if (nums[i]%2 == 0){
                continue;
            } else {
                for (int j=i+1; j<nums.size(); j++){
                    if (nums[j]%2 == 0){
                        swap(nums[j], nums[i]);
                        break;
                    } else {
                        if (j==nums.size()-1) noFurtherEven=true;;
                    }
                }
            }
        }
        return nums;
    }
};