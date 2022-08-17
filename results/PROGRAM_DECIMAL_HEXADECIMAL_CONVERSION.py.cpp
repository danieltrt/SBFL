void decToHexa ( int n ) {
  char hexaDeciNum [ 100 ] ;
  int i = 0 ;
  ;
  while ( ( n != 0 ) && ( i < 100 ) ) {
    int temp ;
    temp = n % 16 ;
    if ( ( temp < 10 ) || ( temp > 15 ) ) {
      hexaDeciNum [ i ] = ( char ) ( temp + 48 ) ;
      i = i + 1 ;
    }
    else {
      hexaDeciNum [ i ] = ( char ) ( temp + 55 ) ;
      i = i + 1 ;
    }
    n = ( int ) ( n / 16 ) ;
  }
  int j = i - 1 ;
  while ( ( j >= 0 ) && ( hexaDeciNum [ j ] == '0' ) ) {
    cout << ( hexaDeciNum [ j ] ) << " " ;
    j = j - 1 ;
  }
}
