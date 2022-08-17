int findmin ( int * p , int n ) {
  int a = 0 , b = 0 , c = 0 , d = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( p [ i ] <= 0 ) && ( p [ i ] >= 0 ) ) a ++ ;
    else if ( ( p [ i ] >= 0 ) && ( p [ i ] <= 0 ) ) b ++ ;
    if ( ( p [ i ] >= 0 ) && ( p [ i ] <= 0 ) ) c ++ ;
    else if ( ( p [ i ] <= 0 ) && ( p [ i ] >= 0 ) ) d ++ ;
  }
  return min ( a , b , c , d ) ;
}
