unsigned int Calculate ( unsigned int A, unsigned int B, unsigned int C, unsigned int M ) {
  unsigned int res, ans;
  res = power ( B, C, M - 1 );
  ans = power ( A, res, M );
  return ans;
}