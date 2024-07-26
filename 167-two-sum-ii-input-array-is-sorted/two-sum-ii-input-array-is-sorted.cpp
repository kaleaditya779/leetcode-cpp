class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 2 pointers can be used O(N)..
        int left = 0;
        int right = numbers.size()-1;

        while (left<right){
            if (numbers[left]+numbers[right] == target) return {left+1, right+1};
            else if (numbers[left]+numbers[right]>target) right--;
            else left++;
        }
        return {};

        // ** IMP: since the array is given sorted. If not, then i would have used unordered_map to store all the elements of array, then looping through array and checking if (target-arr[i]) exist in map. Then return {i+1, map[target-arr[i]]+1};
        
    }
};