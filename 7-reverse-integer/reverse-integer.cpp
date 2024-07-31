class Solution {
public:
    int reverse(int x) {
        int rem;
        int reverseX=0;
        if (x<0) {
            if (x==INT_MIN){
                    return 0;
                } else {
                    x=x*-1;
                }
        
            while (x>0) {
                rem=x%10;
       
                if (reverseX > INT_MAX/10 || (reverseX == INT_MAX/10 && rem>7)){
                    return 0;
                }
                if (reverseX < INT_MIN/10 || (reverseX == INT_MIN/10 && rem<-8)){
                    return 0;
                }
                    reverseX = reverseX*10+rem;

                x=x/10;
            }
         
                return reverseX*-1;
   
        
        }

        while (x>0) {
            rem=x%10;
       
                if (reverseX > INT_MAX/10 || (reverseX == INT_MAX/10 && rem>7)) {
                    return 0;
                } 
                if (reverseX < INT_MIN/10 || (reverseX == INT_MIN/10 && rem<-8)){
                    return 0;
                }
                reverseX = reverseX*10+rem;
     
            x=x/10;
        }
    
                return reverseX;
    
    }
};