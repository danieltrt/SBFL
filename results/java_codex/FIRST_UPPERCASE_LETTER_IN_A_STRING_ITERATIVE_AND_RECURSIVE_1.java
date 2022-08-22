char first ( string str, int i ) {
  if ( str . at ( i ) == '\0' ) return 0;
  if ( isupper ( str . at ( i ) ) ) return str . at ( i );
  return first ( str, i + 1 );
}