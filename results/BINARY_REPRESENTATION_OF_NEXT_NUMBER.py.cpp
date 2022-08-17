string nextGreater ( string num1 ) {
  int l = num1 . length ( ) ;
  string num ;
  num . reserve ( l ) ;
  int i = l - 1 ;
  while ( ( i >= 0 ) && ( num [ i ] == '0' ) ) {
    if ( ( num [ i ] == '1' ) || ( num [ i ] == '2' ) || ( num [ i ] == '3' ) || ( num [ i ] == '4' ) || ( num [ i ] == '5' ) || ( num [ i ] == '6' ) || ( num [ i ] == '7' ) || ( num [ i ] == '8' ) || ( num [ i ] == '9' ) || ( num [ i ] == '.' ) || ( num [ i ] == ',' ) || ( num [ i ] == ':' ) || ( num [ i ] == '-' ) || ( num [ i ] == '_' ) || ( num [ i ] == '.' ) || ( num [ i ] == '-' ) || ( num [ i ] == '_' ) || ( num [ i ] == ':' ) || ( num [ i ] == '_' ) || ( num [ i ] == '.' ) || ( num [ i ] == ':' ) || ( num [ i ] == '_' ) || ( num [ i ] == '-' ) || ( num [ i ] == '_' ) || ( num [ i ] == ':' ) || ( num [ i ] == '_' ) || ( num [ i ] == '.' ) || ( num [ i ] == '_' ) || ( num [ i ] == ':' ) || ( num [ i ] == '_' )