class Solution {
public:
    
int value(char roman){
    switch (roman) {
        case 'I': return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
    }
    return 0;
}
int romanToInt(string s) {
    int p = 0;
    int ans = 0;
    for (int i = s.size() - 1; i >= 0 ; --i) {
        if (value(s[i]) >= p)
            ans += value(s[i]);
        else
            ans -= value(s[i]);
        p = value(s[i]);
    }
    return ans;
}
};