string nextGreater ( string num ) {
  int l = num . length ( );
  int i;
  for ( i = l - 1;
  i >= 0;
  i -- ) {
    if ( num [ i ] == '0' ) {
      num [ i ] = '1';
      break;
    }
    else {
      num [ i ] = '0';
    }
  }
  if ( i < 0 ) {
    num = "1" + num;
  }
  return num;
}