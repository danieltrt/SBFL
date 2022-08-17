int bitonicGenerator ( int * arr , int n ) {
  int i = 1 ;
  int j = n - 1 ;
  if ( ( j % 2 != 0 ) && ( j < j ) ) j = j - 1 ;
  while ( ( i < j ) ) {
    arr [ j ] = arr [ i ] ;
    arr [ i ] = arr [ j ] ;
    i = i + 2 ;
    j = j - 2 ;
  }
  int arrF [ n ] ;
  int arrS [ n ] ;
  for ( int i = 0 ;
  i < ( int ) ( ( n + 1 ) / 2 ) ;
  i ++ ) arrF [ i ] = arr [ i ] ;
  i = ( int ) ( ( n + 1 ) / 2 ) ;
  while ( ( i < n ) ) {
    arrS [ i ] = arr [ i ] ;
    i = i + 1 ;
  }
  sort ( arrF , arrS + n ) ;
  sort ( arrF + n , arrS + n ) ;
  for ( int i = 0 ;
  i < arrS [ 0 ] ;
  i ++ ) arrF [ i ] = arrS [ i ] ;
  return arrF [ 0 ] ;
}
