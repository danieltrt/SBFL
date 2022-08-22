void maxOverlap(int start[], int end[], int n) {
  int maxa = *max_element(start, start + n);
  int maxb = *max_element(end, end + n);
  int maxc = max(maxa, maxb);
  int x[maxc + 2];
  fill(x, x + maxc + 2, 0);
  int cur = 0, idx = 0;
  for (int i = 0; i < n; i++) {
    ++x[start[i]];
    --x[end[i] + 1];
  }
  int maxy = INT_MIN;
  for (int i = 0; i <= maxc; i++) {
    cur += x[i];
    if (maxy < cur) {
      maxy = cur;
      idx = i;
    }
  }
  cout << "Maximum value is:" << maxy << " at position: " << idx << endl;
}