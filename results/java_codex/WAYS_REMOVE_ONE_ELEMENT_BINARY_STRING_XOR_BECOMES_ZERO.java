int xorZero(string s) {
        int one_count = 0, zero_count = 0;
        char str[s.length()];
        strcpy(str, s.c_str());
        int n = strlen(str);
        for (int i = 0; i < n; i++)
            if (str[i] == '1')
                one_count++;
            else
                zero_count++;
        if (one_count % 2 == 0)
            return zero_count;
        return one_count;
    }