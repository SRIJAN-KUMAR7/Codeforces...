class Solution {
public:
    int alternateDigitSum(int n) {
    int sum=0;
    bool ispos=true;
    string numStr = to_string(n);
    for (char digit : numStr) {
        int curdig = digit - '0'; 
        if (ispos) {
            sum += curdig; 
        } else {
            sum -= curdig;
        }
        ispos = !ispos; 
    }
    return sum;
    }
};