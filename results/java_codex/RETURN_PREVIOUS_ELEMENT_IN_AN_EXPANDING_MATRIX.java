string findLeft(string str) {
        int n = str.length();
        while (n > 0) {
            n--;
            if (str[n] == 'd') {
                str[n] = 'c';
                break;
            }
            if (str[n] == 'b') {
                str[n] = 'a';
                break;
            }
            if (str[n] == 'a') str[n] = 'b';
            else if (str[n] == 'c') str[n] = 'd';
        }
        return str;
    }