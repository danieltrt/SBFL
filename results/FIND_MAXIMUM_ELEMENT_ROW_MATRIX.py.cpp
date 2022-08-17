int maxelement ( int * arr [ ] ) {
  int no_of_rows = sizeof ( arr ) / sizeof ( int ) ;
  int no_of_column = sizeof ( arr [ 0 ] ) / sizeof ( int ) ;
  for ( int i = 0 ;
  i < no_of_rows ;
  i ++ ) {
    int max1 = 0 ;
    for ( int j = 0 ;
    j < no_of_column ;
    j ++ ) {
      if ( arr [ i ] [ j ] > max1 ) max1 = arr [ i ] [ j ] ;
    }
    cout << max1 << endl ;
  }
  return 0 ;
}
