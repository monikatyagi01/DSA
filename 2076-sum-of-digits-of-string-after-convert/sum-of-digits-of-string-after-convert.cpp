class Solution {
public:
    int getLucky(string s, int k) {
        string str = "";
        for (char ch : s) {
            str += to_string((ch - 'a') + 1);
        }

        long long num = 0;
        for (char c : str) {
            num += c - '0';
        }

        while (k > 1) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
            k--;  
        }return num;
    }
};