void amendSentence ( string str ) {
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    if ( str [ i ] >= 'A' && str [ i ] <= 'Z' ) {
      str [ i ] = str [ i ] + 32;
      if ( i != 0 ) cout << " ";
      cout << str [ i ];
    }
    else cout << str [ i ];
  }
}