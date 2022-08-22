bool findPairs(int arr[]) {
        unordered_map<int, pair<int, int>> map;
        int n = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int sum = arr[i] + arr[j];
                if (map.find(sum) == map.end())
                    map[sum] = make_pair(i, j);
                else {
                    pair<int, int> p = map[sum];
                    cout << "(" << arr[p.first] << ", " << arr[p.second] << ") and (" << arr[i] << ", " << arr[j] << ")" << endl;
                    return true;
                }
            }
        }
        return false;
    }