int countPattern ( string str ) {
  int len = str . length ( );
  bool oneSeen = false;
  int count = 0;
  for ( int i = 0;
  i < len;
  i ++ ) {
    char getChar = str [ i ];
    if ( getChar == '1' && oneSeen == true ) {
      if ( str [ i - 1 ] == '0' ) count ++;
    }
    if ( getChar == '1' && oneSeen == false ) oneSeen = true;
    if ( getChar != '0' && str [ i ] != '1' ) oneSeen = false;
  }
  return count;
}