string nextGreater ( string num ) {
  int l = num . size ( );
  for ( int i = l - 1;
  i >= 0;
  i -- ) {
    if ( num . at ( i ) == '0' ) {
      num . at ( i ) = '1';
      break;
    }
    else num . at ( i ) = '0';
  }
  if ( i < 0 ) num = "1" + num;
  return num;
}