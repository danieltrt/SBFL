int f_filled ( char str [ ] , int l , int h ) {
  if ( l > h ) return INT_MAX ;
  if ( l == h ) return 0 ;
  if ( l == h - 1 ) return ( str [ l ] == str [ h ] ) ? 0 : 1 ;
  return ( str [ l ] == str [ h ] ) ? f_filled ( str , l + 1 , h - 1 ) : ( min ( f_filled ( str , l , h - 1 ) , f_filled ( str , l + 1 , h ) ) + 1 ) ;
}
