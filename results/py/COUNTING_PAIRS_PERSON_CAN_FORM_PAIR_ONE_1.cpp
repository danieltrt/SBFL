int f_filled ( int x ) {
  if ( x == 0 || x == 1 ) return 1 ;
  else return ( f_filled ( x - 1 ) + ( x - 1 ) * f_filled ( x - 2 ) ) ;
}
