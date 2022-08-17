int calculate ( int a [ ] ) {
  int maximum = max ( a ) ;
  int frequency [ maximum + 1 ] ;
  for ( int i = 0 ;
  i < maximum ;
  i ++ ) frequency [ i ] ++ ;
  int answer = 0 ;
  for ( int i = 0 ;
  i < frequency [ 0 ] ;
  i ++ ) answer = answer + i * ( i - 1 ) / 2 ;
  return answer ;
}
