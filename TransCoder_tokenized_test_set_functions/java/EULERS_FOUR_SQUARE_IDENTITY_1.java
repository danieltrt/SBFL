public static void checkEulerFourSquareIdentity ( int a, int b ) {
  int ab = a * b;
  boolean flag = false;
  int i = 0;
  while ( i * i <= ab ) {
    int j = i;
    while ( i * i + j * j <= ab ) {
      int k = j;
      while ( i * i + j * j + k * k <= ab ) {
        double l = Math . sqrt ( ab - ( i * i + j * j + k * k ) );
        if ( Math . floor ( l ) == Math . ceil ( l ) && l >= k ) {
          flag = true;
          System . out . print ( "i = " + i + "\n" );
          System . out . print ( "j = " + j + "\n" );
          System . out . print ( "k = " + k + "\n" );
          System . out . print ( "l = " + ( int ) l + "\n" );
          System . out . print ( "Product of " + a + " and " + b + " can be written as sum of squares" + " of i, j, k, l \n" );
          System . out . print ( ab + " = " + i + "*" + i + " + " + j + "*" + j + " + " + k + "*" + k + " + " + ( int ) l + "*" + ( int ) l + "\n" );
        }
        k += 1;
      }
      j += 1;
    }
    i += 1;
  }
  if ( flag == false ) {
    System . out . println ( "Solution doesn't exist!" );
    return;
  }
}