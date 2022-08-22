void removeDuplicates(char S[]) {
  int n = sizeof(S);
  if (n < 2) {
    return;
  }
  int j = 0;
  for (int i = 1; i < n; i++) {
    if (S[j] != S[i]) {
      j++;
      S[j] = S[i];
    }
  }
  cout << S[0, j + 1];
}