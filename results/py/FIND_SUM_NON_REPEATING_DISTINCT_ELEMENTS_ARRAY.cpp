int f_filled ( int arr [ ] , int n ) {
  set < int > s ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] != 0 ) s . insert ( arr [ i ] ) ;
  }
  for ( set < int > :: iterator it = s . begin ( ) ;
  it != s . end ( ) ;
  it ++ ) sum = sum + * it ;
  return sum ;
}
