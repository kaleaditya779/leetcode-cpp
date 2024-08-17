class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count =0 ;
        
        for (int i=0; i<=31; i++){
            int shiftP = 31-i;
            
            int aBit = a&(1<<shiftP);
            int bBit = b&(1<<shiftP);
            int cBit = c&(1<<shiftP);
            if (i>=28){
                cout<<endl<<"aBit: "<<aBit;
                cout<<endl<<"bBit: "<<bBit;
                cout<<endl<<"cBit: "<<cBit;
                cout<<endl<<"--------------------";
            }
            if ((cBit) == ((aBit) | (bBit))) continue;
            else {
                if (cBit==0 && aBit!=0 && bBit!=0) count+=2;
                
                else count++;
            }
        }
        

        return count;
    }
};