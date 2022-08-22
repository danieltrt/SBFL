void makePermutation(int a[], int n) {
  unordered_map<int, int> count;
  for (int i = 0; i < n; i++) {
    if (count.find(a[i]) != count.end()) {
      count[a[i]]++;
    }
    else {
      count[a[i]] = 1;
    }
  }
  int next_missing = 1;
  for (int i = 0; i < n; i++) {
    if ((count.find(a[i]) != count.end() && count[a[i]] != 1) || a[i] > n || a[i] < 1) {
      count[a[i]]--;
      while (count.find(next_missing) != count.end()) next_missing++;
      a[i] = next_missing;
      count[next_missing] = 1;
    }
  }
}