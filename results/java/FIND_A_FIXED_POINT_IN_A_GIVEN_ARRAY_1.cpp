int f_filled ( int arr [ ] , int low , int high ) {
  if ( high >= low ) {
    int mid = ( low + high ) / 2 ;
    if ( mid == arr [ mid ] ) return mid ;
    if ( mid > arr [ mid ] ) return f_filled ( arr , ( mid + 1 ) , high ) ;
    else return f_filled ( arr , low , ( mid - 1 ) ) ;
  }
  return - 1 ;
}
