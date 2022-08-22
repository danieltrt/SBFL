int sum(vector<int> a, int n) {
        unordered_map<int, int> cnt;
        int ans = 0, pre_sum = 0;
        for (int i = 0; i < n; i++) {
            ans += (i * a[i]) - pre_sum;
            pre_sum += a[i];
            if (cnt.find(a[i] - 1) != cnt.end()) ans -= cnt[a[i] - 1];
            if (cnt.find(a[i] + 1) != cnt.end()) ans += cnt[a[i] + 1];
            if (cnt.find(a[i]) != cnt.end()) {
                cnt[a[i]] += 1;
            }
            else {
                cnt[a[i]] = 1;
            }
        }
        return ans;
    }