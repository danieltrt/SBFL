void longestSubsequence(int a[], int n) {
  unordered_map<int, int> mp;
  int dp[n];
  int maximum = INT_MIN;
  int index = -1;
  for (int i = 0; i < n; i++) {
    if (mp.find(a[i] - 1) != mp.end()) {
      int lastIndex = mp[a[i] - 1] - 1;
      dp[i] = 1 + dp[lastIndex];
    } else
      dp[i] = 1;
    mp[a[i]] = i + 1;
    if (maximum < dp[i]) {
      maximum = dp[i];
      index = i;
    }
  }
  for (int curr = a[index] - maximum + 1; curr <= a[index]; curr++)
    cout << curr << " ";
}