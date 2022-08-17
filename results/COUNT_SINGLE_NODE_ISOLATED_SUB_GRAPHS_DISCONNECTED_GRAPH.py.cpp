int compute ( int * graph , int N ) {
  int count = 0 ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) {
    if ( ( graph [ i ] == 0 ) || ( graph [ i ] == 1 ) ) count ++ ;
  }
  return count ;
}
