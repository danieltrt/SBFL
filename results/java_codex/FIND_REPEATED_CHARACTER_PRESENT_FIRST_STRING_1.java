int findRepeatFirst ( string s ) {
  int p = - 1, i, k;
  int MAX_CHAR = 256;
  int hash [ MAX_CHAR ];
  int pos [ MAX_CHAR ];
  for ( i = 0;
  i < s . length ( );
  i ++ ) {
    k = ( int ) s . charAt ( i );
    if ( hash [ k ] == 0 ) {
      hash [ k ] ++;
      pos [ k ] = i;
    }
    else if ( hash [ k ] == 1 ) hash [ k ] ++;
  }
  for ( i = 0;
  i < MAX_CHAR;
  i ++ ) {
    if ( hash [ i ] == 2 ) {
      if ( p == - 1 ) p = pos [ i ];
      else if ( p > pos [ i ] ) p = pos [ i ];
    }
  }
  return p;
}