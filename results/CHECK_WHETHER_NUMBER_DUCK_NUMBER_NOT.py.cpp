int checkDuck ( string num ) {
  int l = num . length ( ) ;
  int countZero = 0 ;
  int i = 1 ;
  while ( i < l ) {
    char ch = num [ i ] ;
    if ( ( ch == '0' ) || ( ch == '1' ) || ( ch == '2' ) || ( ch == '3' ) || ( ch == '4' ) || ( ch == '5' ) || ( ch == '6' ) || ( ch == '7' ) || ( ch == '8' ) || ( ch == '9' ) || ( ch == '.' ) || ( ch == ',' ) || ( ch == ':' ) || ( ch == ';' ) || ( ch == '.' ) || ( ch == ',' ) || ( ch == ';' ) || ( ch == ':' ) || ( ch == ',' ) || ( ch == ';' ) || ( ch == ',' ) || ( ch == ';' ) || ( ch == ',' ) || ( ch == ':' ) || ( ch == ';'