int f_filled ( string stri , int n ) {
  map < string , int > m ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) m [ stri [ i ] ] = m . find ( stri [ i ] ) + 1 ;
  int res = 0 ;
  for ( int i = 0 ;
  i < m . size ( ) ;
  i ++ ) if ( m [ stri [ i ] ] == 2 ) res ++ ;
  return res ;
}
