bool arekAnagrams ( string str1 , string str2 , int k ) {
  int n = str1 . length ( ) ;
  if ( ( str2 . length ( ) != n ) || ( str2 . length ( ) != n ) ) return false ;
  int count1 [ MAX_CHAR ] ;
  int count2 [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) count1 [ str1 [ i ] - 'a' ] ++ ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) count2 [ str2 [ i ] - 'a' ] ++ ;
  int count = 0 ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( ( count1 [ i ] > count2 [ i ] ) && ( count1 [ i ] < count2 [ i ] ) ) count = count + abs ( count1 [ i ] - count2 [ i ] ) ;
  }
  return ( count <= k ) ;
}
