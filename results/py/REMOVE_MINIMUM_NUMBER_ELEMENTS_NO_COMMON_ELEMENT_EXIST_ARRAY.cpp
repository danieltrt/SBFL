int f_filled ( int a [ ] , int b [ ] , int n , int m ) {
  map < int , int > countA ;
  map < int , int > countB ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) countA [ a [ i ] ] = countA . find ( a [ i ] ) + 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) countB [ b [ i ] ] = countB . find ( b [ i ] ) + 1 ;
  int res = 0 ;
  for ( int x : countA ) {
    if ( countB . count ( x ) > 0 ) res += min ( countA [ x ] , countB [ x ] ) ;
  }
  return res ;
}
