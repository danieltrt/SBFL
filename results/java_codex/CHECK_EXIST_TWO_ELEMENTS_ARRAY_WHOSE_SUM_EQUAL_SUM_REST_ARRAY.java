bool checkPair(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        if (sum % 2 != 0) {
            return false;
        }
        sum = sum / 2;
        unordered_set<int> s;
        for (int i = 0; i < n; i++) {
            int val = sum - arr[i];
            if (s.find(val) != s.end() && val == *s.rbegin()) {
                cout << "Pair elements are " << arr[i] << " and " << val << endl;
                return true;
            }
            s.insert(arr[i]);
        }
        return false;
    }