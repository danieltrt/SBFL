public static int calculateSum ( String arr [ ], int n ) {
  if ( n == 0 ) return 0;
  String s = arr [ 0 ];
  int value = Integer . parseInt ( s );
  int sum = value;
  for ( int i = 2;
  i < n;
  i = i + 2 ) {
    s = arr [ i ];
    value = Integer . parseInt ( s );
    char operation = arr [ i - 1 ] . charAt ( 0 );
    if ( operation == '+' ) sum += value;
    else sum -= value;
  }
  return sum;
}