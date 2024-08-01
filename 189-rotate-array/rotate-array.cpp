class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // rotate right by k steps: simply "right shifting" the array k times & cycling it..
        // ex. [1,2,3,4] 
        // rotate by 2 => [3,4,1,2]
        int n = nums.size();
        /*
        // approach 1:
        vector<int> dupli(n);
        for (int i=0; i<n; i++){
            dupli[(i+k)%n]=nums[i];
        }
        nums=dupli; */

        // approach 2:
        // reverse the input array. then reverse 1st k ele. then reverse remaining eles..
        int l=0, r=n-1;
        while (l<r){
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l++;
            r--;
        }
        // now reverse 1st k eles,
        l=0, r=(k%n)-1;
        while (l<r){
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l++;
            r--;
        }
        // reverse the rest
        l=(k%n), r=n-1;
        while (l<r){
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l++;
            r--;
        }


    }
};