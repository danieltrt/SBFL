int sequence ( int n ) {
  int f [ ] = {
    0 , 1 , 1 }
    ;
    cout << f [ 1 ] << " " ;
    cout << f [ 2 ] << " " ;
    for ( int i = 3 ;
    i <= n ;
    i ++ ) {
      f [ i ] = f [ f [ i - 1 ] ] + f [ i - f [ i - 1 ] ] ;
      cout << f [ i ] << " " ;
    }
    return 0 ;
  }
  