class Solution {
public:
    void merge(vector<int>& h, vector<string>& names, int low, int mid, int high){
        int left = low;
        int right = mid+1;
        vector<int> temp_h;
        vector<string> temp_n;
        while (left<=mid && right<=high){
            if (h[left]<h[right]){
                temp_h.push_back(h[right]);
                temp_n.push_back(names[right]);
                right++;
            } else {
                temp_h.push_back(h[left]);
                temp_n.push_back(names[left]);
                left++;
            }
        }
        while (left<=mid){
            temp_h.push_back(h[left]);
                temp_n.push_back(names[left]);
                left++;
        }
        while (right<=high){
            temp_h.push_back(h[right]);
                temp_n.push_back(names[right]);
                right++;
        }

        for (int i=low; i<=high; i++){
            h[i]=temp_h[i-low];
            names[i]=temp_n[i-low];
        }
        
    }


    void reverseMergeSort(vector<int>& h, vector<string>& names, int low, int high){
        int mid=(low+high)/2;
        if (low<high){
            reverseMergeSort(h, names, low, mid);
            reverseMergeSort(h, names, mid+1, high);
            merge(h, names, low, mid, high);
        } else {
            return;
        }
    }


    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int low=0;
        int high=names.size()-1;
        reverseMergeSort(heights, names, low, high);
        return names;
    }
};