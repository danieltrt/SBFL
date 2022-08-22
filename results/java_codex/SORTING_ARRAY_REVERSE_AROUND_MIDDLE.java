bool ifPossible(int arr[], int n) {
        int copy[n];
        for (int i = 0; i < n; i++) {
            copy[i] = arr[i];
        }
        sort(copy, copy + n);
        for (int i = 0; i < n; i++) {
            if (!(arr[i] == copy[i]) && !(arr[n - 1 - i] == copy[i])) return false;
        }
        return true;
    }