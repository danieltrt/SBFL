int f_filled ( int arr [ ] , int n ) {
  map < int , int > mp ;
  int Sum = 0 ;
  int count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] == 0 ) && ( arr [ i ] != - 1 ) ) arr [ i ] = - 1 ;
    Sum += arr [ i ] ;
    if ( ( Sum == 0 ) || ( Sum == 1 ) ) count ++ ;
    if ( ( Sum < mp . size ( ) ) || ( mp [ Sum ] == 0 ) ) count += mp [ Sum ] ;
    mp [ Sum ] = mp [ Sum ] + 1 ;
  }
  return count ;
}
