static void reverse ( char str [ ] ) {
  int n = str . length, i;
  for ( i = 0;
  i < n / 2;
  i ++ ) {
    swap ( str, i, n - i - 1 );
  }
}