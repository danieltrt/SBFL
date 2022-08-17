void reverseStr ( string str ) {
  int n = str . length ( ) ;
  int i = 0 , j = n - 1 ;
  while ( i < j ) {
    str [ i ] = str [ j ] ;
    i ++ ;
    j -- ;
  }
}
