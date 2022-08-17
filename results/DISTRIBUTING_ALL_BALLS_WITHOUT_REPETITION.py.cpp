bool distributingBalls ( int k , int n , string string ) {
  int a [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) a [ ( int ) string [ i ] - ( int ) 'a' ] ++ ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) if ( ( a [ i ] > k ) && ( a [ i ] < n ) ) return false ;
  return true ;
}
