int f_filled ( int a [ ] , int n , int k ) {
  unordered_map < int , int > m ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( m . count ( a [ i ] ) ) m [ a [ i ] ] = m [ a [ i ] ] + 1 ;
  else m [ a [ i ] ] = 1 ;
  int res = INT_MAX ;
  unordered_set < int > :: iterator it = m . begin ( ) ;
  for ( int temp : it ) if ( m [ temp ] == k ) res = min ( res , temp ) ;
  return ( res != INT_MAX ) ? res : - 1 ;
}
