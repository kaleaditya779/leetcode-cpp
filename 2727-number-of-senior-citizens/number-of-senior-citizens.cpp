class Solution {
public:
    int countSeniors(vector<string>& details) {
        int countAbove60 = 0;
        for (int i=0; i<details.size(); i++){
            string age = details[i].substr(11, 2);
            int ageI = stoi(age);
            if (ageI > 60) countAbove60++;
        }
        return countAbove60;

        // My notes:
        // stoi() = used to convert string (which is representing a number) to int
        // stringVal.substr(int index_to_start, int num_of_characters) = used to retrive substring as specified from the stringVal..
    }
};