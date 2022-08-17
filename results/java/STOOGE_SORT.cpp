void f_filled ( int arr [ ] , int l , int h ) {
  if ( l >= h ) return ;
  if ( arr [ l ] > arr [ h ] ) {
    int t = arr [ l ] ;
    arr [ l ] = arr [ h ] ;
    arr [ h ] = t ;
  }
  if ( h - l + 1 > 2 ) {
    int t = ( h - l + 1 ) / 3 ;
    f_filled ( arr , l , h - t ) ;
    f_filled ( arr , l + t , h ) ;
    f_filled ( arr , l , h - t ) ;
  }
}
