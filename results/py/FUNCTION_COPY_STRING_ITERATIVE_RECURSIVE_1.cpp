int f_filled ( string s1 , string s2 , int index ) {
  s2 [ index ] = s1 [ index ] ;
  ;
  if ( ( index == s1 . length ( ) - 1 ) || ( index == s2 . length ( ) - 1 ) ) return index ;
  ;
  return index + 1 ;
}
