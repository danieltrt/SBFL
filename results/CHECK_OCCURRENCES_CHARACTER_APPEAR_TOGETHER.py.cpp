bool checkIfAllTogether ( string s , char c ) {
  bool oneSeen = false ;
  int i = 0 ;
  int n = s . length ( ) ;
  while ( ( i < n ) && ( c == s [ i ] ) ) {
    if ( ( oneSeen == true ) || ( c == s [ i ] ) ) {
      if ( ( oneSeen == true ) || ( c == s [ i ] ) ) return false ;
      while ( ( i < n ) && ( c == s [ i ] ) ) i = i + 1 ;
      oneSeen = true ;
    }
    else i = i + 1 ;
  }
  return true ;
}
