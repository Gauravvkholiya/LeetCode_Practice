class Solution {
public:
    string multiply(string num1, string num2) {
        int i = 0, maxSize = num1.size() + num2.size(), prod = 0, j;
        string res(maxSize, '0');
        while (i++ < num1.size() || prod) {
            j = 0;
            while (j++ < num2.size() || prod) {
				prod = (i <= num1.size() ? (num1[num1.size() - i] - 48) : 0) * (j <= num2.size() ? (num2[num2.size() - j] - 48) : 0) + prod + res[maxSize - j - i + 1] - 48;
                res[maxSize - j + 1 - i] = (prod % 10) + 48;
                prod /= 10;
            }
        }
        i = -1;
        while (++i < maxSize - 1 && res[i] == '0') {}
        return res.substr(i);
    }
};