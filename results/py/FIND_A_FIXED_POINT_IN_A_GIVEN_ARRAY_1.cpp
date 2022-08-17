int f_filled ( int * arr , int low , int high ) {
  if ( high >= low ) {
    int mid = ( low + high ) / 2 ;
    if ( ifmidisarr [ mid ] ) returnmid ;
    if ( ifmidisarr [ mid ] > arr [ mid ] ) returnf_filled ( arr , ( mid + 1 ) , high ) ;
    else returnf_filled ( arr , low , ( mid - 1 ) ) ;
    return - 1 ;
  }
  return - 1 ;
}
