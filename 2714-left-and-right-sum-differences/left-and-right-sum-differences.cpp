class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> l(n, 0);
        vector<int> r(n, 0);
        l[0] = 0;
        r[n-1]=0;
        int m=n-2;
        for (int i=1;i<n; i++){
            l[i]=l[i-1]+nums[i-1];
            r[m]=r[m+1]+nums[m+1];
            m--;
        }
        // for (auto i:l) cout<<i<<" ";
        // cout<<endl;
        // for (auto i:r) cout<<i<<" ";
        vector<int> re;
        for (int i=0; i<n; i++){
            re.push_back(abs(l[i]-r[i]));
        }

        return re;
    }
};