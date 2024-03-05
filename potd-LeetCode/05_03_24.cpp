class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int l = 0, r = n - 1;

        while (l < r) {
            if (s[l] != s[r]) break;

            char c = s[l];
            while ((l <= r) && (s[l] == c)) l++;
            while ((l <= r) && (s[r] == c)) r--;
        }

        if (l <= r) return (r - l + 1);
        return 0;
    }
};