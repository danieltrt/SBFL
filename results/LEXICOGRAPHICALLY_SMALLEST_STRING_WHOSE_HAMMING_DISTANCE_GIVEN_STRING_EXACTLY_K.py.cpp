void findString ( string str , int n , int k ) {
  if ( ( k == 0 ) || ( k == 1 ) ) {
    cout << str << endl ;
    return ;
  }
  string str2 = str ;
  int p = 0 ;
  for ( int i = 0 ;
  i < n ;
  i += 1 ) {
    if ( ( str2 [ i ] != 'a' ) && ( str2 [ i ] != 'a' ) ) {
      str2 [ i ] = 'a' ;
      p ++ ;
      if ( ( p == k ) || ( p == k + 1 ) ) break ;
    }
  }
  if ( ( p < k ) || ( p == k + 1 ) ) {
    int i = n - 1 ;
    while ( ( i >= 0 ) && ( str [ i ] == 'a' ) ) {
      if ( ( str [ i ] == 'a' ) || ( i == k + 1 ) ) {
        str2 [ i ] = 'b' ;
        p ++ ;
      }
      if ( ( p == k ) || ( i == k + 1 ) ) break ;
      i -- ;
    }
  }
  cout << str2 << endl ;
}
