static void substringConversions ( String str, int k, int b ) {
  int i = 0, sum = 0, counter = k - 1;
  for ( i = 0;
  i < k;
  i ++ ) {
    sum = ( int ) ( sum + ( ( str . charAt ( i ) - '0' ) * Math . pow ( b, counter ) ) );
    counter --;
  }
  System . out . print ( sum + " " );
  int prev = sum;
  sum = 0;
  counter = 0;
  for (;
  i < str . length ( );
  i ++ ) {
    sum = ( int ) ( prev - ( ( str . charAt ( i - k ) - '0' ) * Math . pow ( b, k - 1 ) ) );
    sum = sum * b;
    sum = sum + ( str . charAt ( i ) - '0' );
    System . out . print ( sum + " " );
    prev = sum;
    counter ++;
  }
}