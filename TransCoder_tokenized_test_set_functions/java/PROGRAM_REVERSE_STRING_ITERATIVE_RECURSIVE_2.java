static void recursiveReverse ( char [ ] str, int i ) {
  int n = str . length;
  if ( i == n / 2 ) return;
  swap ( str, i, n - i - 1 );
  recursiveReverse ( str, i + 1 );
}