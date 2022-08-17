int main ( ) {
  int count ;
  int sum ;
  int i ;
  int j ;
  int count = 0 ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    if ( i == '0' ) count ++ ;
    else count ++ ;
  }
  while ( count > 0 || count > 1 ) {
    for ( i = 0 ;
    i <= x ;
    i ++ ) {
      if ( count > 0 ) {
        cout << "0" << endl ;
        count -- ;
      }
    }
    for ( j = 0 ;
    j <= y ;
    j ++ ) {
      if ( count > 0 ) {
        cout << "1" << endl ;
        count -- ;
      }
    }
  }
  return 0 ;
}
