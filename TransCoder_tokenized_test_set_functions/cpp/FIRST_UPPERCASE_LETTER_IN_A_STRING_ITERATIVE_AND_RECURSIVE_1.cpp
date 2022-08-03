char first ( string str, int i = 0 ) {
  if ( str [ i ] == '\0' ) return 0;
  if ( isupper ( str [ i ] ) ) return str [ i ];
  return first ( str, i + 1 );
}