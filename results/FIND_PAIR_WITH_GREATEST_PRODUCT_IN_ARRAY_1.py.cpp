int findGreatest ( int arr [ ] , int n ) {
  map < int , int > m ;
  for ( int i = 0 ;
  i < arr [ 0 ] ;
  i ++ ) m [ i ] = m . find ( arr [ i ] ) -> second + 1 ;
  sort ( arr , arr + n ) ;
  for ( int i = n - 1 ;
  i > 0 ;
  i -- ) {
    int j = 0 ;
    while ( ( j < i ) && arr [ j ] <= sqrt ( arr [ i ] ) ) {
      if ( ( arr [ i ] % arr [ j ] == 0 ) ) {
        int result = arr [ i ] / arr [ j ] ;
        if ( ( result != arr [ j ] ) && ( resultinm . end ( ) != andm [ result ] ) ) returnarr [ i ] = result ;
        else if ( ( result == arr [ j ] ) && ( resultinm . end ( ) != andm [ result ] ) ) returnarr [ i ] = result ;
      }
      j ++ ;
    }
  }
  return - 1 ;
}
