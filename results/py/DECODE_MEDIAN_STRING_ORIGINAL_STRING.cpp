string f_filled ( string s ) {
  int l = s . length ( ) ;
  string s1 ;
  if ( ( l % 2 ) == 0 ) {
    bool isEven = true ;
    if ( isEven ) {
      s1 = s [ i ] + s1 ;
      s1 += s [ i + 1 ] ;
    }
    else {
      if ( ( l - i > 1 ) && ( l - i - 1 ) > 1 ) {
        s1 += s [ i ] ;
        s1 = s [ i + 1 ] + s1 ;
      }
      else {
        s1 += s [ i ] ;
      }
    }
  }
  return s1 ;
}
