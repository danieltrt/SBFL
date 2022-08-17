string f_filled ( string str1 , string str2 ) {
  if ( str1 . length ( ) > str2 . length ( ) ) {
    string temp = str1 ;
    str1 = str2 ;
    str2 = temp ;
  }
  string str3 ;
  int n1 = str1 . length ( ) ;
  int n2 = str2 . length ( ) ;
  int diff = n2 - n1 ;
  int carry = 0 ;
  for ( int i = n1 - 1 ;
  i >= 0 ;
  i -- ) {
    int sum = ( ( ( int ) str1 [ i ] - '0' ) + ( ( int ) str2 [ i + diff ] - '0' ) ) + carry ;
    str3 = str3 + to_string ( sum % 10 ) ;
    carry = sum / 10 ;
  }
  foriinrange ( n2 - n1 - 1 , - 1 , - 1 , - 1 ) {
    int sum = ( ( ( int ) str2 [ i ] - '0' ) + carry ) ;
    str3 = str3 + to_string ( sum % 10 ) ;
    carry = sum / 10 ;
  }
  if ( ( carry ) && ( carry != 0 ) ) str3 += to_string ( carry + '0' ) ;
  str3 = str3 . substr ( 0 , str3 . length ( ) - 1 ) ;
  return returnstr3 ;
}
