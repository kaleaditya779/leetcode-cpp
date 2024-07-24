class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        // nums is actual decimal
        // i => actual decimal representation
        // mapping[i] == j => representation of i in that system
        // so, we have to change num from decimal to that system and return in increasing order of decimal equivalents, but without actually changing those decimal values..
        // to_string(intVal) (converts int to string)
        // c_str(stringVal) (converts string to char array)
        // int val = charVal - '0' (converts charVal to respective int)
        // unordered_map<string, string> mappingS;
        vector<string> numsS;
        // for (int i=0; i<mapping.size(); i++){
        //     mappingS[to_string(i)]= to_string(mapping[i]);
        // }
        for (int i=0; i<nums.size(); i++){
            numsS.push_back(to_string(nums[i]));
        }

        for (int i=0; i<numsS.size(); i++){
            int toConvert = 0;
            while (toConvert < numsS[i].size()) {
                string key = string(1, numsS[i][toConvert]);
                numsS[i].replace(toConvert, 1, to_string(mapping[stoi(key)]));
                toConvert++;
            }
        }
        // for (auto i:numsS) cout<<i<<endl;

        // Now i have nums in that system, just need to convert them to int and sort both numsS and nums in increasing order of numsS..
        vector<int> numsI;
        for(auto i: numsS){
            numsI.push_back(stoi(i));
        }

        // for (int i:numsI) cout<<i<<" ";

        // insertion sorting numsI and nums..
        // for (int i=1; i<nums.size(); i++){
        //     int temp=numsI[i];
        //     int temp_num = nums[i];
        //     int j=i-1;

        //     while (j>=0 && numsI[j]>temp){
        //         numsI[j+1]=numsI[j];
        //         nums[j+1]=nums[j];
        //         j--;
        //     }
        //     numsI[j+1]=temp;
        //     nums[j+1]=temp_num;
        // }
        vector<pair<int, int>> pairs;
        for (int i=0; i<nums.size(); i++){
            pairs.emplace_back(numsI[i], nums[i]);
        }

        stable_sort(pairs.begin(), pairs.end(), [&](auto a, auto b) {
            return a.first < b.first;
        });

        for (int i=0; i<pairs.size(); i++){
            nums[i]=pairs[i].second;
        }

        return nums;
    }
};