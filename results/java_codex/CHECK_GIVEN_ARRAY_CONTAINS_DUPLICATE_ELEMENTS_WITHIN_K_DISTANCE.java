bool checkDuplicatesWithinK ( int arr [ ], int k ) {
  unordered_set < int > set;
  for ( int i = 0;
  i < arr . size ( );
  i ++ ) {
    if ( set . find ( arr [ i ] ) != set . end ( ) ) return true;
    set . insert ( arr [ i ] );
    if ( i >= k ) set . erase ( arr [ i - k ] );
  }
  return false;
}