int f_filled ( int arr [ ] , int n ) {
  map < int , int > vis ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) vis [ arr [ i ] ] = 1 ;
  int k = vis . size ( ) ;
  map < int , int > vid ;
  int ans = 0 ;
  int right = 0 ;
  int window = 0 ;
  for ( int left = 0 ;
  left < n ;
  left ++ ) {
    while ( ( right < n && window < k ) || ( right == n && window == k ) ) {
      if ( arr [ right ] == 1 ) vid [ arr [ right ] ] ++ ;
      else vid [ arr [ right ] ] = 1 ;
      if ( ( vid [ arr [ right ] ] == 1 ) || ( window == k ) ) window ++ ;
      right ++ ;
    }
    if ( ( window == k ) || ( right == n && window == k ) ) ans += ( n - right + 1 ) ;
    vid [ arr [ left ] ] -- ;
    if ( ( vid [ arr [ left ] ] == 0 ) || ( window == k ) ) window -- ;
  }
  return ans ;
}
