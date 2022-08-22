int singleNumber(int a[], int n) {
        unordered_set<int> s;
        for (int i : a) {
            s.insert(i);
        }
        int arr_sum = 0;
        for (int i : a) {
            arr_sum += i;
        }
        int set_sum = 0;
        for (int i : s) {
            set_sum += i;
        }
        return (3 * set_sum - arr_sum) / 2;
    }