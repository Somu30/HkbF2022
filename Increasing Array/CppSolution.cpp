static int numDecodings(const string& s) {
        int ans = 0;
        bt(0, s, ans);
        return ans;
    }
 
    static void bt(int i, const string& s, int& ans) {
        if (i == s.size()) {
            ++ans;
            return;
        }
        
        char ch = s[i];
        if (ch == '1') {
            // just A
            bt(i + 1, s, ans);
            // 10 .. 19
            if (i + 1 < s.size()) {
                bt(i + 2, s, ans);
            }
        } else if (ch == '2') {
            // just B
            bt(i + 1, s, ans);
            // 20 .. 26
            if (i + 1 < s.size()) {
                ch = s[i + 1];
                if ('0' <= ch && ch <= '6') {
                    bt(i + 2, s, ans);
                } else {
                    return;
                }
            }
        } else if (ch == '0') {
            // nothing starts with 0
            return;
        } else {
            // for 3 .. 9 there is only one way
            bt(i + 1, s, ans);
        }
    }
