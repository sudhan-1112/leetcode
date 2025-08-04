class Solution {
public:
    bool isPalindrome(int x) {
        
        long b=0;
        int a=x;
        if(x>0)
        {
        long c=log10(x);
        for(int i =0;i<=c;i++)
        {
           
            b=pow(10,c-i)*(a%10)+b;
             a=a/10;
        }
        }
        if(b==x)
        {
            return true;
        }
        else
        return false;
    }
};