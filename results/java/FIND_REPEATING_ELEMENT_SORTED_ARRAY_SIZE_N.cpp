int f_filled ( int arr [ ] , int low , int high ) {
  if ( low > high ) return - 1 ;
  int mid = ( low + high ) / 2 ;
  if ( arr [ mid ] != mid + 1 ) {
    if ( mid > 0 && arr [ mid ] == arr [ mid - 1 ] ) return mid ;
    return f_filled ( arr , low , mid - 1 ) ;
  }
  return f_filled ( arr , mid + 1 , high ) ;
}
