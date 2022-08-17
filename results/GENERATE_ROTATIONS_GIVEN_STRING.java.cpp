void printRotatedString ( string str ) {
  int len = str . length ( ) ;
  string result ;
  for ( int i = 0 ;
  i < len ;
  i ++ ) {
    result . reserve ( len ) ;
    int j = i ;
    int k = 0 ;
    for ( int k2 = j ;
    k2 < len ;
    k2 ++ ) {
      result . insert ( k , str [ j ] ) ;
      k ++ ;
      j ++ ;
    }
    j = 0 ;
    while ( j < i ) {
      result . insert ( k , str [ j ] ) ;
      j ++ ;
      k ++ ;
    }
    cout << result << endl ;
  }
}
