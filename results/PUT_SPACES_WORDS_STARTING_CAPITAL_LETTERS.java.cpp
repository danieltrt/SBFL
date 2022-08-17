void amendSentence ( string sstr ) {
  string :: size_type pos = 0 ;
  for ( string :: size_type i = 0 ;
  i < sstr . length ( ) ;
  i ++ ) {
    if ( sstr [ i ] >= 'A' && sstr [ i ] <= 'Z' ) {
      pos = ( pos + 32 ) ;
      if ( i != 0 ) cout << " " ;
      cout << sstr [ i ] ;
    }
    else cout << sstr [ i ] ;
  }
}
