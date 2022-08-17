void longestSubseqWithK ( string str , int k ) {
  int n = str . length ( ) ;
  vector < int > freq ( MAX_CHARS , 0 ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) freq [ str [ i ] - 'a' ] ++ ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( freq [ str [ i ] - 'a' ] >= k ) cout << str [ i ] ;
  }
}
