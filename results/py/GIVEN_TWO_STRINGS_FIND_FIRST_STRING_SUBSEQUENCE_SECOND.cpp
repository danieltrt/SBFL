bool f_filled ( string string1 , string string2 , int m , int n ) {
  if ( m == 0 ) return true ;
  if ( n == 0 ) return false ;
  if ( string1 [ m - 1 ] == string2 [ n - 1 ] ) return f_filled ( string1 , string2 , m - 1 , n - 1 ) ;
  return f_filled ( string1 , string2 , m , n - 1 ) ;
}
