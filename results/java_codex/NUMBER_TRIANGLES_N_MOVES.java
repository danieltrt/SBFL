int numberOfTriangles(int n) {
  int answer[n+1];
  answer[0] = 1;
  for (int i = 1; i <= n; i++) {
    answer[i] = answer[i-1] * 3 + 2;
  }
  return answer[n];
}