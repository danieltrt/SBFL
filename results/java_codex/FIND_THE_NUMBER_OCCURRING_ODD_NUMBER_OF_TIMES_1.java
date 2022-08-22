int getOddOccurrence(int arr[], int n) {
        unordered_map<int, int> hmap;
        for (int i = 0; i < n; i++) {
            if (hmap.find(arr[i]) != hmap.end()) {
                int val = hmap[arr[i]];
                hmap[arr[i]] = val + 1;
            }
            else hmap[arr[i]] = 1;
        }
        for (auto a : hmap) {
            if (a.second % 2 != 0) return a.first;
        }
        return -1;
    }