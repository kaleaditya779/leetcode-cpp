class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        // very simple logic that came to my mind by refering to RULE of leetcode (check if you can use MAP anywhere to solve the problem)
        unordered_map<int, int> stuCount;
        for (int i:students){
            stuCount[i]++;
        }

        for (int i=0; i<sandwiches.size(); i++){
            if (stuCount[sandwiches[i]] > 0) {
                stuCount[sandwiches[i]]--;
            } else {
                break;
            };
        }
        int unableToEat=0;
        for (auto i: stuCount){
            unableToEat+=i.second;
        }
        return unableToEat;
    }
};