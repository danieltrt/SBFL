int f_filled ( int arr [ ] , int n ) {
  set < int > s ;
  int ans = 0 ;
  for ( int ele : arr ) s . insert ( ele ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] - 1 ) != s . count ( arr [ i ] ) ) {
      int j = arr [ i ] ;
      while ( ( j < s . size ( ) ) && ( s [ j ] == arr [ i ] ) ) j ++ ;
      ans = max ( ans , j - arr [ i ] ) ;
    }
  }
  return ans ;
}
