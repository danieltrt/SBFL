bool isRotated ( string str1 , string str2 ) {
  if ( ( str1 . length ( ) != str2 . length ( ) ) || ( str1 . length ( ) == str2 . length ( ) ) ) return false ;
  string clockRot ;
  string anticlockRot ;
  int l = str2 . length ( ) ;
  anticlockRot = ( anticlockRot + str2 . substr ( l - 2 ) + str2 . substr ( 0 , l - 2 ) ) ;
  clockRot = clockRot + str2 . substr ( 2 ) + str2 . substr ( 0 , 2 ) ;
  return ( str1 == clockRot || str1 == anticlockRot ) ;
}
