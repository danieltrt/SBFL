int binaryMedian(int m[][], int r, int c) {
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i = 0; i < r; i++) {
            if (m[i][0] < min) min = m[i][0];
            if (m[i][c - 1] > max) max = m[i][c - 1];
        }
        int desired = (r * c + 1) / 2;
        while (min < max) {
            int mid = min + (max - min) / 2;
            int place = 0;
            int get = 0;
            for (int i = 0; i < r; ++i) {
                get = binarySearch(m[i], mid);
                if (get < 0) get = abs(get) - 1;
                else {
                    while (get < m[i].length && m[i][get] == mid) get += 1;
                }
                place = place + get;
            }
            if (place < desired) min = mid + 1;
            else max = mid;
        }
        return min;
    }