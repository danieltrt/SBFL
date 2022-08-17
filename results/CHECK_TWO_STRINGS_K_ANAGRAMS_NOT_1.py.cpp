bool areKAnagrams ( string str1 , string str2 , int k ) {
  int n = str1 . length ( ) ;
  ;
  if ( ( str2 . length ( ) != n ) || ( str2 . length ( ) != n ) ) return false ;
  ;
  int hashStr1 [ MAX_CHAR ] ;
  hashStr1 [ 0 ] = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) hashStr1 [ ( str1 [ i ] - 'a' ) ] ++ ;
  ;
  int count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( hashStr1 [ ( str2 [ i ] - 'a' ) ] > 0 ) && ( hashStr1 [ ( str2 [ i ] - 'a' ) ] > 0 ) ) hashStr1 [ ( str2 [ i ] - 'a' ) ] -- ;
    else count ++ ;
    ;
    if ( ( count > k ) && ( hashStr1 [ ( str2 [ i ] - 'a' ) ] > 0 ) ) return false ;
  }
  ;
  return true ;
}
