class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        if (nums.size()==0) return 0;
        if (nums.size()==1 && nums[0]!=val) return 1;
        if (nums.size()==1 && nums[0]==val) return 0;
        int l=0;
        int r=0;
        while (r<nums.size()){
            if (nums[l]==val){
                if (nums[r]!=val){
                    nums[l]=nums[r];
                    nums[r]=val;
                    l++;
                } else {
                    r++;
                }
            } else {
                l++;
                r=l;
            }
        }
        int i=0;
        while ( i<nums.size() && nums[i]!=val){
            i++;
        }
        return i;
    }
};