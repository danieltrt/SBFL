int count9s ( string number ) {
  int n = number . length ( ) ;
  int d [ 9 ] ;
  d [ 0 ] = 1 ;
  int result = 0 ;
  int modSum = 0 ;
  int continuousZero = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( number [ i ] - '0' ) == 0 ) {
      continuousZero ++ ;
    }
    else {
      continuousZero = 0 ;
    }
    modSum += number [ i ] - '0' ;
    modSum %= 9 ;
    result += d [ modSum ] ;
    d [ modSum ] ++ ;
    result -= continuousZero ;
  }
  return result ;
}
