string firstLetterWord ( string str ) {
  string result ;
  bool v = true ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( ( str [ i ] == ' ' ) || ( str [ i ] == '\t' ) ) v = true ;
    else if ( ( str [ i ] != ' ' && v == true ) ) {
      result += ( str [ i ] ) ;
      v = false ;
    }
  }
  return result ;
}
