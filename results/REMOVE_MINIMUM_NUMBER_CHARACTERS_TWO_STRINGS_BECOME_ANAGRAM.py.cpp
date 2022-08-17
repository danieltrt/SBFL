int remAnagram ( string str1 , string str2 ) {
  int count1 [ CHARS ] ;
  int count2 [ CHARS ] ;
  int i = 0 ;
  while ( i < str1 . length ( ) ) {
    count1 [ str1 [ i ] - 'a' ] ++ ;
    i ++ ;
  }
  i = 0 ;
  while ( i < str2 . length ( ) ) {
    count2 [ str2 [ i ] - 'a' ] ++ ;
    i ++ ;
  }
  int result = 0 ;
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) {
    result += abs ( count1 [ i ] - count2 [ i ] ) ;
  }
  return result ;
}
