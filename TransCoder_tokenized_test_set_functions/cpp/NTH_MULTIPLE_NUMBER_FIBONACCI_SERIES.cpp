int findPosition ( int k, int n ) {
  unsigned long long int f1 = 0, f2 = 1, f3;
  for ( int i = 2;
  i <= MAX;
  i ++ ) {
    f3 = f1 + f2;
    f1 = f2;
    f2 = f3;
    if ( f2 % k == 0 ) return n * i;
  }
}