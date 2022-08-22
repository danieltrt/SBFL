bool subArrayExists(int arr[], int n) {
        unordered_map<int, int> hM;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (arr[i] == 0 || sum == 0 || hM.find(sum) != hM.end())
                return true;
            hM[sum] = i;
        }
        return false;
    }