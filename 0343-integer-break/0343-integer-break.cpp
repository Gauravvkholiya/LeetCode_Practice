 class Solution {
    public :
    int integerBreak(int n) {
        cin.tie(0);
        cout.tie(0);
        if(n==2) return 1;
        if(n==3) return 2;
        int product = 1;
        while(n>4){
            product*=3;
            n-=3;
        }
        product*=n;
        
        return product;
    }
};