int smallestKFreq(int a[], int n, int k) {
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            if (m.find(a[i]) != m.end())
                m[a[i]]++;
            else
                m[a[i]] = 1;
        int res = INT_MAX;
        for (auto it = m.begin(); it != m.end(); it++)
            if (it->second == k)
                res = min(res, it->first);
        return (res != INT_MAX) ? res : -1;
    }