int f_filled ( int * arr , int n ) {
  unordered_map < int , int > map ;
  int maxDist = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ! map . count ( arr [ i ] ) ) {
      map [ arr [ i ] ] = i ;
    }
    else {
      maxDist = max ( maxDist , i - map [ arr [ i ] ] ) ;
    }
  }
  return maxDist ;
}
