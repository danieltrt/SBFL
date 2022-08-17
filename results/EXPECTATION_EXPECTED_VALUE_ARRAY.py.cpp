float calcExpectation ( float * a , int n ) {
  float prb = 1 / n ;
  float sum = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) sum += ( a [ i ] * prb ) ;
  return ( float ) sum ;
}
