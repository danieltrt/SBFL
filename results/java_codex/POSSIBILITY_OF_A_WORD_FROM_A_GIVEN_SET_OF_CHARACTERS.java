bool isPresent ( string s, string q ) {
  int freq [ MAX_CHAR ] = { 0 };
  for ( int i = 0;
  i < s . length ( );
  i ++ ) freq [ s [ i ] ] ++;
  for ( int i = 0;
  i < q . length ( );
  i ++ ) {
    freq [ q [ i ] ] --;
    if ( freq [ q [ i ] ] < 0 ) return false;
  }
  return true;
}