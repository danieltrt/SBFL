int minStringValue(string str, int k) {
        int l = str.length();
        if (k >= l) return 0;
        int frequency[MAX_CHAR];
        for (int i = 0; i < l; i++) frequency[str[i] - 'a']++;
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < MAX_CHAR; i++) {
            if (frequency[i] != 0) q.push(frequency[i]);
        }
        while (k != 0) {
            int temp = q.top();
            q.pop();
            temp = temp - 1;
            q.push(temp);
            k--;
        }
        int result = 0;
        while (!q.empty()) {
            int temp = q.top();
            result += temp * temp;
            q.pop();
        }
        return result;
    }