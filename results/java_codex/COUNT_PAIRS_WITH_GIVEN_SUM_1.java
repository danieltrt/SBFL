int getPairsCount(int arr[], int n, int sum) {
        unordered_map<int, int> hm;
        for (int i = 0; i < n; i++) {
            if (hm.find(arr[i]) == hm.end())
                hm[arr[i]] = 0;
            hm[arr[i]] += 1;
        }
        int twice_count = 0;
        for (int i = 0; i < n; i++) {
            if (hm.find(sum - arr[i]) != hm.end())
                twice_count += hm[sum - arr[i]];
            if (sum - arr[i] == arr[i])
                twice_count--;
        }
        return twice_count / 2;
    }