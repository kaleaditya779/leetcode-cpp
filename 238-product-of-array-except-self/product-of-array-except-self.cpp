class Solution {
public:



    vector<int> productExceptSelf(vector<int>& nums) {

        // 1. 1 way is to calculate product of all array ele. Then while iterating just dividing that product by the current i value and storing in new array at i. (but Q. said to not use division operator)
        
        /*
        vector<int> preProduct;
        int low=0;
        int high=preProduct.size();
        int product=1;
        while (low<=high && high<nums.size()){
            if (low==high){
                preProduct.push_back(product);
                high=preProduct.size();
            } else {
                product=product*nums[low];
                low++;
            }
        }
        // for (int &i:preProduct) cout<<i<<" ";
        
        vector<int> suffProduct;
        int low2=suffProduct.size();
        int high2=nums.size()-1;
        product=1;
        while (high2>=low2){
            if (low2==high2){
                // product=product*nums[high2];
                suffProduct.push_back(product);
                low2=suffProduct.size();
                high2=nums.size()-1;
                product=1;
            } else {
                product=product*nums[high2];
                high2--;
            }
        }
        // for (int &i:suffProduct) cout<<i<<" ";

        for (int i=0; i<nums.size(); i++){
            nums[i]=preProduct[i]*suffProduct[i];
        }
        // ** Space complexity: O(2N) (for preProduct and suffProduct)
        // ** time complexity: O(N) :)
        */
        int n=nums.size();
        vector<int> result(n, 0);
        int product=1;
        for (int i=0; i<n; i++){
            if (i==0) result[i]=product;
            else {
                result[i]=result[i-1]*nums[i-1];
            }
        }
        for (auto i:result) cout<<i<<" ";
        
        for (int i=nums.size()-1; i>=0; i--){
            if (i==nums.size()-1) {
                result[i]=result[i]*product;
                product=nums[i];
            }
            else {
                result[i]=result[i]*product;
                product=product*nums[i];

            }
        }
        

        return result;
    }
};