int findInteger ( int arr [ ] , int n ) {
  map < int , int > hash ;
  int maximum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( i < 0 ) || ( i > max ) ) {
      if ( abs ( i ) != hash . count ( abs ( i ) ) ) hash [ abs ( i ) ] = - 1 ;
      else hash [ abs ( i ) ] -- ;
    }
    else hash [ i ] = hash . count ( i ) + 1 ;
  }
  for ( int i = 0 ;
  i < arr [ 0 ] ;
  i ++ ) {
    if ( i < n && hash [ i ] > 0 ) return i ;
  }
  return - 1 ;
}
