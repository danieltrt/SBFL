int f_filled ( string str , int l , int h ) {
  if ( ( l > h ) || ( h > h ) ) return INT_MAX ;
  if ( ( l == h ) || ( l == h - 1 ) ) return ( str [ l ] == str [ h ] ) ? 0 : 1 ;
  if ( ( str [ l ] == str [ h ] ) || ( str [ l ] == str [ h ] ) ) return f_filled ( str , l + 1 , h - 1 ) ;
  else return ( min ( f_filled ( str , l , h - 1 ) , f_filled ( str , l + 1 , h ) ) + 1 ) ;
}
