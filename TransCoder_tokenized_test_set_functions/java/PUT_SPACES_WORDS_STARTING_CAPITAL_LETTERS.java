public static void amendSentence ( String sstr ) {
  char [ ] str = sstr . toCharArray ( );
  for ( int i = 0;
  i < str . length;
  i ++ ) {
    if ( str [ i ] >= 'A' && str [ i ] <= 'Z' ) {
      str [ i ] = ( char ) ( str [ i ] + 32 );
      if ( i != 0 ) System . out . print ( " " );
      System . out . print ( str [ i ] );
    }
    else System . out . print ( str [ i ] );
  }
}