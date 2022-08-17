int KMP ( int m , int n , string str2 , string str1 ) {
  int pos = 0 ;
  int Len = 0 ;
  int p [ m + 1 ] ;
  int k = 0 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    while ( ( k > 0 ) && str1 [ k ] != str1 [ i - 1 ] ) k = p [ k ] ;
    if ( ( str1 [ k ] == str1 [ i - 1 ] ) || ( str1 [ i ] == str2 [ i ] ) ) k ++ ;
    p [ i ] = k ;
  }
  int j = 0 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    while ( ( j > 0 ) && j < n && str1 [ j ] != str2 [ i ] ) j = p [ j ] ;
    if ( ( j < n && str1 [ j ] == str2 [ i ] ) || ( j > Len ) ) j ++ ;
    if ( ( j > Len ) ) {
      Len = j ;
      pos = i - j + 1 ;
    }
  }
  cout << "Shift = " << pos << endl ;
  cout << "Prefix = " << str1 . substr ( 0 , Len ) << endl ;
  return pos ;
}
