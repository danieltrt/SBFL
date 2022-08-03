static boolean check ( String str ) {
  int n = str . length ( );
  if ( n == 0 ) return false;
  if ( n == 1 ) return ( ( str . charAt ( 0 ) - '0' ) % 4 == 0 );
  int last = str . charAt ( n - 1 ) - '0';
  int second_last = str . charAt ( n - 2 ) - '0';
  return ( ( second_last * 10 + last ) % 4 == 0 );
}