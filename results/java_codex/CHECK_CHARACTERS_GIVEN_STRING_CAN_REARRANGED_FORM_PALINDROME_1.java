bool canFormPalindrome ( string str ) {
  vector < char > list;
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    if ( find ( list . begin ( ), list . end ( ), str [ i ] ) != list . end ( ) ) list . erase ( find ( list . begin ( ), list . end ( ), str [ i ] ) );
    else list . push_back ( str [ i ] );
  }
  if ( str . length ( ) % 2 == 0 && list . empty ( ) || ( str . length ( ) % 2 == 1 && list . size ( ) == 1 ) ) return true;
  else return false;
}