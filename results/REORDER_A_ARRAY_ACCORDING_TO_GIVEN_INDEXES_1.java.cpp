void reorder ( ) {
  for ( int i = 0 ;
  i < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  i ++ ) {
    while ( index [ i ] != i ) {
      int oldTargetI = index [ i ] ;
      char oldTargetE = ( char ) arr [ index [ i ] ] ;
      arr [ index [ i ] ] = arr [ i ] ;
      index [ i ] = index [ i ] ;
      index [ i ] = oldTargetI ;
      arr [ i ] = oldTargetE ;
    }
  }
}
