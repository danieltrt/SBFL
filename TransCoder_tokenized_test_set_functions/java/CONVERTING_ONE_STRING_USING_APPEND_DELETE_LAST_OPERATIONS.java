static boolean isConvertible ( String str1, String str2, int k ) {
  if ( ( str1 . length ( ) + str2 . length ( ) ) < k ) return true;
  int commonLength = 0;
  for ( int i = 0;
  i < Math . min ( str1 . length ( ), str2 . length ( ) );
  i ++ ) {
    if ( str1 == str2 ) commonLength ++;
    else break;
  }
  if ( ( k - str1 . length ( ) - str2 . length ( ) + 2 * commonLength ) % 2 == 0 ) return true;
  return false;
}