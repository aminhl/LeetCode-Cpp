class Solution {
public:
    bool isPalindrome(int x) {
        string ns = to_string(x);
        string rev;
        for (int i = ns.size()-1; i >=0 ; --i)
        rev += ns[i];
        bool test = (strcmp(ns.c_str(),rev.c_str()) == 0) ?  true : false;
        return test;
    }
};