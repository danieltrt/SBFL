int f_filled ( int * arr , int l , int r , int x ) {
  if ( r >= l ) {
    int mid = l + ( r - l ) / 2 ;
    if ( ifarr [ mid ] == x ) returnmid = mid ;
    if ( elifarr [ mid ] > x ) returnf_filled ( arr , l , mid - 1 , x ) ;
    else returnf_filled ( arr , mid + 1 , r , x ) ;
  }
  else return - 1 ;
}
