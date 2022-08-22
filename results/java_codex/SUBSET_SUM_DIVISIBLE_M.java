bool modularSum(int arr[], int n, int m) {
        if (n > m) return true;
        bool DP[m];
        fill(DP, DP + m, false);
        for (int i = 0; i < n; i++) {
            if (DP[0]) return true;
            bool temp[m];
            fill(temp, temp + m, false);
            for (int j = 0; j < m; j++) {
                if (DP[j] == true) {
                    if (DP[(j + arr[i]) % m] == false) temp[(j + arr[i]) % m] = true;
                }
            }
            for (int j = 0; j < m; j++) if (temp[j]) DP[j] = true;
            DP[arr[i] % m] = true;
        }
        return DP[0];
    }