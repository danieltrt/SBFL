static void strToBinary ( String s ) {
  int n = s . length ( );
  for ( int i = 0;
  i < n;
  i ++ ) {
    int val = Integer . valueOf ( s . charAt ( i ) );
    String bin = "";
    while ( val > 0 ) {
      if ( val % 2 == 1 ) {
        bin += '1';
      }
      else bin += '0';
      val /= 2;
    }
    bin = reverse ( bin );
    System . out . print ( bin + " " );
  }
}