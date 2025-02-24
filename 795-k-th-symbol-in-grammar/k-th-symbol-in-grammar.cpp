class Solution {
public:
    int kthGrammar(int n, int k) {
        
        bool Valuessame = true; 
        n = pow(2, n - 1);
        while (n != 1) {
            n /= 2;
                       if (k > n) {
                k -= n;
                Valuessame = !Valuessame;
            }
        }
        return ((Valuessame) ? 0 : 1) ;
    }
};