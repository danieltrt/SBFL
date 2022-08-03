static String nextGreater ( String num ) {
  int l = num . length ( );
  int i;
  for ( i = l - 1;
  i >= 0;
  i -- ) {
    if ( num . charAt ( i ) == '0' ) {
      num = num . substring ( 0, i ) + '1' + num . substring ( i + 1 );
      break;
    }
    else {
      num = num . substring ( 0, i ) + '0' + num . substring ( i + 1 );
    }
  }
  if ( i < 0 ) {
    num = "1" + num;
  }
  return num;
}