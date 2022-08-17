bool aredisjoint ( int set1 [ ] , int set2 [ ] ) {
  for ( int i = 0 ;
  i < sizeof ( set1 ) / sizeof ( set1 [ 0 ] ) ;
  i ++ ) {
    for ( int j = 0 ;
    j < sizeof ( set2 ) / sizeof ( set2 [ 0 ] ) ;
    j ++ ) {
      if ( set1 [ i ] == set2 [ j ] ) return false ;
    }
  }
  return true ;
}
