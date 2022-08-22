int maxPrefix(string s, string t) {
        int count = 0;
        for (int i = 0; i < t.length(); i++) {
            if (count == t.length()) break;
            if (t.at(i) == s.at(count)) count++;
        }
        return count;
    }