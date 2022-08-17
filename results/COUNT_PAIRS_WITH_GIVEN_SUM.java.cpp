void getPairsCount ( int * arr , int sum ) {
  int count = 0 ;
  for ( int i = 0 ;
  i < arr -> length ;
  i ++ ) for ( int j = i + 1 ;
  j < arr -> length ;
  j ++ ) if ( ( arr -> at ( i ) + arr -> at ( j ) ) == sum ) count ++ ;
  printf ( "Count of pairs is %d\n" , count ) ;
}
