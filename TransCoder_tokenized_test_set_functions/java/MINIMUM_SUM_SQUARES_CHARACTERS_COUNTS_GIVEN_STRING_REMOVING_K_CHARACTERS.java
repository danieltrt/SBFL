static int minStringValue ( String str, int k ) {
  int l = str . length ( );
  if ( k >= l ) return 0;
  int [ ] frequency = new int [ MAX_CHAR ];
  for ( int i = 0;
  i < l;
  i ++ ) frequency [ str . charAt ( i ) - 'a' ] ++;
  Comparator < Integer > c = new IntCompare ( );
  PriorityQueue < Integer > q = new PriorityQueue < > ( c );
  for ( int i = 0;
  i < MAX_CHAR;
  i ++ ) {
    if ( frequency [ i ] != 0 ) q . add ( frequency [ i ] );
  }
  while ( k != 0 ) {
    int temp = q . peek ( );
    q . poll ( );
    temp = temp - 1;
    q . add ( temp );
    k --;
  }
  int result = 0;
  while ( ! q . isEmpty ( ) ) {
    int temp = q . peek ( );
    result += temp * temp;
    q . poll ( );
  }
  return result;
}