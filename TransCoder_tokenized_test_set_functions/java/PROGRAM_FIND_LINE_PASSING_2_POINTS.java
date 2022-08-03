static void lineFromPoints ( Pair P, Pair Q ) {
  int a = Q . second - P . second;
  int b = P . first - Q . first;
  int c = a * ( P . first ) + b * ( P . second );
  if ( b < 0 ) {
    System . out . println ( "The line passing through points P and Q is: " + a + "x " + b + "y = " + c );
  }
  else {
    System . out . println ( "The line passing through points P and Q is: " + a + "x + " + b + "y = " + c );
  }
}