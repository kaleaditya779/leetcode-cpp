class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        // In my opinion such problems are of greedy approach
        // Means when iterating through students, we have to find the nearest (least moves) seats..
        sort(students.begin(), students.end());
        sort(seats.begin(), seats.end());
        // unordered_map<int, int> studSeat;
        vector<vector<int>> studSeat;
        for (int i=0; i<students.size(); i++){
            studSeat.push_back({students[i], seats[i]});
        }

        for (auto i:studSeat){
            cout<<i[0]<<": "<<i[1]<<endl; 
        }

        int minMoves=0;
        for (auto i:studSeat){
            if (i[0] == i[1]) continue;
            else if (i[0] > i[1]){
                minMoves+=(i[0]-i[1]);
            } else if (i[0] < i[1]){
                minMoves+=(i[1]-i[0]);
            }
        }
        return minMoves;
    }
};