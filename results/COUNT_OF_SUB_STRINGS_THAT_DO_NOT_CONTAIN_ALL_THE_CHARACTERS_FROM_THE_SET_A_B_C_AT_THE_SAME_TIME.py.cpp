int CountSubString ( string Str , int n ) {
  int ans = ( n * ( n + 1 ) ) / 2 ;
  int aIndex = 0 ;
  int bIndex = 0 ;
  int cIndex = 0 ;
  foriinrange ( n ) {
    if ( ( Str [ i ] == 'a' ) || ( Str [ i ] == 'b' ) ) {
      aIndex = i + 1 ;
      ans -= min ( bIndex , cIndex ) ;
    }
    else if ( ( Str [ i ] == 'c' ) || ( Str [ i ] == 'd' ) ) {
      bIndex = i + 1 ;
      ans -= min ( aIndex , cIndex ) ;
    }
    else {
      cIndex = i + 1 ;
      ans -= min ( aIndex , bIndex ) ;
    }
  }
  return ans ;
}
