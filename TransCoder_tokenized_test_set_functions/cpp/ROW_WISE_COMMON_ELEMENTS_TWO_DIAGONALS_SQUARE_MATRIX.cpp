int countCommon ( int mat [ ] [ MAX ], int n ) {
  int res = 0;
  for ( int i = 0;
  i < n;
  i ++ ) if ( mat [ i ] [ i ] == mat [ i ] [ n - i - 1 ] ) res ++;
  return res;
}