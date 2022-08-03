public static void findFibSubset ( Integer [ ] x ) {
  Integer max = Collections . max ( Arrays . asList ( x ) );
  List < Integer > fib = new ArrayList < Integer > ( );
  List < Integer > result = new ArrayList < Integer > ( );
  Integer a = 0;
  Integer b = 1;
  while ( b < max ) {
    Integer c = a + b;
    a = b;
    b = c;
    fib . add ( c );
  }
  for ( Integer i = 0;
  i < x . length;
  i ++ ) {
    if ( fib . contains ( x [ i ] ) ) {
      result . add ( x [ i ] );
    }
  }
  System . out . println ( result );
}