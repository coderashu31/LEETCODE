class Solution {
public:
    bool isPalindrome(int x) {
        // x is less than 0
        if(x<0){
            return false;
        }
        // x>0 
        long int temp = x;
        long int reversed = 0;
        while( temp!= 0){
            int d = temp % 10;
            reversed = reversed * 10 + d;
            temp = temp / 10;
        }
        return reversed == x;
    }
};