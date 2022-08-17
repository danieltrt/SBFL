int f_filled ( int A [ ] , int B [ ] , int n ) {
  int Hash [ n ] ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) {
    Hash [ A [ i ] ] ++ ;
    Hash [ B [ i ] ] ++ ;
  }
  int Sum = 0 ;
  for ( int x : Hash ) {
    if ( Hash [ x ] == 1 ) Sum += x ;
  }
  return Sum ;
}
