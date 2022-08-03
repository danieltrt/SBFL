static void substringConversions ( String str, int k, int b ) {
  for ( int i = 0;
  i + k <= str . length ( );
  i ++ ) {
    String sub = str . substring ( i, i + k );
    int sum = 0, counter = 0;
    for ( int j = sub . length ( ) - 1;
    j >= 0;
    j -- ) {
      sum = ( int ) ( sum + ( ( sub . charAt ( j ) - '0' ) * Math . pow ( b, counter ) ) );
      counter ++;
    }
    System . out . print ( sum + " " );
  }
}