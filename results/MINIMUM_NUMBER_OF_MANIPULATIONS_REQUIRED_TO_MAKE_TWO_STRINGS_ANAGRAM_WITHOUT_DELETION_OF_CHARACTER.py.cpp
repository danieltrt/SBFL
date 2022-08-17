int countManipulations ( string s1 , string s2 ) {
  int count = 0 ;
  vector < int > charCount ( 26 , 0 ) ;
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) charCount [ i ] = 0 ;
  for ( int i = 0 ;
  i < s1 . length ( ) ;
  i ++ ) charCount [ s1 [ i ] - 'a' ] ++ ;
  for ( int i = 0 ;
  i < s2 . length ( ) ;
  i ++ ) {
    charCount [ s2 [ i ] - 'a' ] -- ;
    if ( ( charCount [ s2 [ i ] - 'a' ] < 0 ) && ( charCount [ s2 [ i ] - 'a' ] > 0 ) ) count ++ ;
  }
  return count ;
}
