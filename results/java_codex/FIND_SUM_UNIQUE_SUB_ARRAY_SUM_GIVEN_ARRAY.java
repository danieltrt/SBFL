int findSubarraySum(int arr[], int n) {
        int res = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += arr[j];
                if (m.find(sum) != m.end()) {
                    m[sum]++;
                } else {
                    m[sum] = 1;
                }
            }
        }
        for (auto x : m) {
            if (x.second == 1) {
                res += x.first;
            }
        }
        return res;
    }