bool canFormPalindrome ( string strr ) {
  string listt ;
  for ( int i = 0 ;
  i < strr . length ( ) ;
  i ++ ) {
    if ( ( strr [ i ] == ' ' ) || ( strr [ i ] == '\t' ) || ( strr [ i ] == '\n' ) || ( strr [ i ] == ' ' ) || ( strr [ i ] == '\0' ) ) {
      listt . erase ( listt . begin ( ) + i ) ;
    }
    else {
      listt += strr [ i ] ;
    }
  }
  if ( ( strr . length ( ) % 2 == 0 && listt . length ( ) == 0 || ( strr . length ( ) % 2 == 1 && listt . length ( ) == 1 ) ) {
    return true ;
  }
  else {
    return false ;
  }
}
