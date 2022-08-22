int minRemove(int a[], int b[], int n, int m) {
        unordered_map<int, int> countA;
        unordered_map<int, int> countB;
        for (int i = 0; i < n; i++) {
            if (countA.find(a[i]) != countA.end()) countA[a[i]]++;
            else countA[a[i]] = 1;
        }
        for (int i = 0; i < m; i++) {
            if (countB.find(b[i]) != countB.end()) countB[b[i]]++;
            else countB[b[i]] = 1;
        }
        int res = 0;
        for (auto x : countA) {
            if (countB.find(x.first) != countB.end()) res += min(countB[x.first], x.second);
        }
        return res;
    }