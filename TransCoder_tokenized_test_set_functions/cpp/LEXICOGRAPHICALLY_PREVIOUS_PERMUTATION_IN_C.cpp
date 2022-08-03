bool prevPermutation ( string & str ) {
  int n = str . length ( ) - 1;
  int i = n;
  while ( i > 0 && str [ i - 1 ] <= str [ i ] ) i --;
  if ( i <= 0 ) return false;
  int j = i - 1;
  while ( j + 1 <= n && str [ j + 1 ] <= str [ i - 1 ] ) j ++;
  swap ( str [ i - 1 ], str [ j ] );
  reverse ( str . begin ( ) + i, str . end ( ) );
  return true;
}