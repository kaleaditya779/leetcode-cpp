class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i=0;
        int timePassed=0;
        while (tickets[k]!=0){
            if (i<tickets.size()) {
                // subtract 1 from current POSITIVE number..
                if (tickets[i]>0) {
                    tickets[i]--;
                    i++;
                    timePassed++;
                } else i++;
            }
            else i=0;
        }
        return timePassed;
    }
};