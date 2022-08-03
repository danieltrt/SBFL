bool checkDuplicatesWithinK ( int arr [ ], int n, int k ) {
  unordered_set < int > myset;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( myset . find ( arr [ i ] ) != myset . end ( ) ) return true;
    myset . insert ( arr [ i ] );
    if ( i >= k ) myset . erase ( arr [ i - k ] );
  }
  return false;
}