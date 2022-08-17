char f_filled ( const char * str , int i ) {
  if ( str [ i ] == '\0' ) return 0 ;
  if ( isupper ( str [ i ] ) ) return str [ i ] ;
  return f_filled ( str , i + 1 ) ;
}
