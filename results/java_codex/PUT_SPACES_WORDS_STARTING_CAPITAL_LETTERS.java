void amendSentence ( string sstr ) {
  char str [ sstr . length ( ) ];
  for ( int i = 0;
  i < sstr . length ( );
  i ++ ) {
    str [ i ] = sstr [ i ];
  }
  for ( int i = 0;
  i < sstr . length ( );
  i ++ ) {
    if ( str [ i ] >= 'A' && str [ i ] <= 'Z' ) {
      str [ i ] = ( char ) ( str [ i ] + 32 );
      if ( i != 0 ) cout << " ";
      cout << str [ i ];
    }
    else cout << str [ i ];
  }
}