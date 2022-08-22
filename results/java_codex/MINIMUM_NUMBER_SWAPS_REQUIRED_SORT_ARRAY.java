int minSwaps(vector<int> arr) {
        int n = arr.size();
        vector<pair<int, int>> arrpos;
        for (int i = 0; i < n; i++)
            arrpos.push_back(make_pair(arr[i], i));
        sort(arrpos.begin(), arrpos.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            return a.first > b.first;
        });
        vector<bool> vis(n, false);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (vis[i] || arrpos[i].second == i)
                continue;
            int cycle_size = 0;
            int j = i;
            while (!vis[j]) {
                vis[j] = 1;
                j = arrpos[j].second;
                cycle_size++;
            }
            if (cycle_size > 0) {
                ans += (cycle_size - 1);
            }
        }
        return ans;
    }