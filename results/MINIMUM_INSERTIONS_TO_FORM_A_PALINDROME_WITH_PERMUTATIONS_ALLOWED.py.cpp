int minInsertion ( string str1 ) {
  int n = str1 . length ( ) ;
  int res = 0 ;
  int count [ 26 ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) count [ str1 [ i ] - 'a' ] ++ ;
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) if ( ( count [ i ] % 2 == 1 ) ) res ++ ;
  if ( ( res == 0 ) ) return 0 ;
  else return res - 1 ;
}
