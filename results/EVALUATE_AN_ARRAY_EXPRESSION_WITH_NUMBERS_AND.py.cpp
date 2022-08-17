int calculateSum ( int * arr , int n ) {
  if ( ( n == 0 ) || ( n == 1 ) ) return 0 ;
  char s [ n ] ;
  int value ;
  int sum = value ;
  for ( int i = 2 ;
  i < n ;
  i += 2 ) {
    s [ i ] = arr [ i ] ;
    value = atoi ( s ) ;
    char operation = arr [ i - 1 ] [ 0 ] ;
    if ( ( operation == '+' ) || ( operation == '-' ) || ( operation == '*' ) || ( operation == '/' ) || ( operation == '%' ) || ( operation == '^' ) || ( operation == '%' ) || ( operation == '+' ) || ( operation == '-' ) || ( operation == '*' ) || ( operation == '/' ) || ( operation == '^' ) || ( operation == '%' ) || ( operation == '+' ) || ( operation == '-' ) || ( operation == '^' ) || ( operation == '%' ) || ( operation == '+' ) || ( operation == '-' ) || ( operation == '%' ) || ( operation == '^' ) || ( operation == '%' ) || ( operation == '/' ) || ( operation == '^' ) || ( operation == '%' ) || ( operation == '+' ) || ( operation == '-' ) || ( operation == '%' ) || ( operation == '^' ) || ( operation == '%' ) || ( operation == '%' ) || ( operation == '%' ) || ( operation ==