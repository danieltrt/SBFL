int binarySearch ( int * arr , int l , int r , int x ) {
  if ( r >= l ) {
    int mid = l + ( r - l ) / 2 ;
    if ( ifarr [ mid ] == x ) returnmid = mid ;
    if ( elifarr [ mid ] > x ) returnbinarySearch ( arr , l , mid - 1 , x ) ;
    else returnbinarySearch ( arr , mid + 1 , r , x ) ;
  }
  else return - 1 ;
}
