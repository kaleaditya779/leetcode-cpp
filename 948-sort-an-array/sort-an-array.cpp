class Solution {
public:
    int pivotSetter(vector<int> &arr, int low, int high){
        int pivotValue = arr[low]; // I selected 1st ele of array as pivot
        int leftIndex = low;

        for (int i=low+1; i<=high; i++){
            if (pivotValue>arr[i]) {
                leftIndex++;
                swap(arr[i], arr[leftIndex]);
                
            }
        }
        swap(arr[low], arr[leftIndex]);
        return leftIndex;
    }

    void quickSort(vector<int> &arr, int low, int high) {
        if (low<high){
            int pivotIndex = pivotSetter(arr, low, high);
            quickSort(arr, low, pivotIndex-1);
            quickSort(arr, pivotIndex+1, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {

        // Considering the question, only quick sort, heap sort, merger sort can be though of..
        // merger sort is out due to space complexity..
        // So i implemented using quick sort

        // Now to avoid the O(N^2) worst case complexity of quick sort, i just need to shuffle the array using:
        // Fisher Yates shuffle algorithm
        // which is O(N) time complexity..

        for (int i=nums.size()-1; i>0; i--){
            // Pick a random index from 0 to i 
            int j = rand() % (i + 1); 

            // Swap arr[i] with the element 
            // at random index 
            swap(nums[i], nums[j]); 
        }


        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
};