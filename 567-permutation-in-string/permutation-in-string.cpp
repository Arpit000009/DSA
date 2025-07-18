class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if (n > m) return false;

        // Frequency map of s1
        map<char, int> mpp1;
        for (char c : s1) {
            mpp1[c]++;
        }

        // Initial window map
        map<char, int> mpp2;
        for (int i = 0; i < n; i++) {
            mpp2[s2[i]]++;
        }

        // Check first window
        if (mpp1 == mpp2) return true;

        // Slide the window
        for (int i = n; i < m; i++) {
            mpp2[s2[i]]++;             // add current char
            mpp2[s2[i - n]]--;         // remove old char from window

            if (mpp2[s2[i - n]] == 0)  // clean up 0 count
                mpp2.erase(s2[i - n]);

            if (mpp1 == mpp2) return true;
        }

        return false;
    }
};
