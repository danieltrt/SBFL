bool ifPossible ( int arr [ ], int n ) {
  int cp [ n ];
  copy ( arr, arr + n, cp );
  sort ( cp, cp + n );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( ! ( arr [ i ] == cp [ i ] ) && ! ( arr [ n - 1 - i ] == cp [ i ] ) ) return false;
  }
  return true;
}