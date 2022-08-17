int f_filled ( int arr [ ] , int l , int h , int key ) {
  if ( l > h ) return - 1 ;
  int mid = ( l + h ) / 2 ;
  if ( ifarr [ mid ] == key ) returnmid ++ ;
  if ( ifarr [ l ] <= arr [ mid ] ) {
    if ( ifkey >= arr [ l ] && andkey <= arr [ mid ] ) returnf_filled ( arr , l , mid - 1 , key ) ;
    returnf_filled ( arr , mid + 1 , h , key ) ;
  }
  if ( ifkey >= arr [ mid ] && andkey <= arr [ h ] ) returnf_filled ( a , mid + 1 , h , key ) ;
  returnf_filled ( arr , l , mid - 1 , key ) ;
  return mid ;
}
