bool canMakeStr2 ( string str1 , string str2 ) {
  int count [ MAX ] ;
  string :: size_type str3 = str1 . size ( ) ;
  for ( int i = 0 ;
  i < str3 ;
  i ++ ) {
    count [ str3 ] ++ ;
  }
  string :: size_type str4 = str2 . size ( ) ;
  for ( int i = 0 ;
  i < str4 ;
  i ++ ) {
    if ( count [ str4 ] == 0 ) return false ;
    count [ str4 ] -- ;
  }
  return true ;
}
