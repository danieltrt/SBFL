void amendSentence ( string string ) {
  string = string . c_str ( ) ;
  for ( int i = 0 ;
  i < string . length ( ) ;
  i ++ ) {
    if ( string [ i ] >= 'A' && string [ i ] <= 'Z' ) {
      string [ i ] = ( char ) ( ( char ) ( string [ i ] + 32 ) ) ;
      if ( i != 0 ) cout << " " ;
      cout << string [ i ] << " " ;
    }
    else cout << string [ i ] << " " ;
  }
}
