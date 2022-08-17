int binarySearch ( int * arr , int low , int high ) {
  if ( high >= low ) {
    int mid = ( low + high ) / 2 ;
    if ( ifmidisarr [ mid ] ) returnmid ;
    if ( ifmidisarr [ mid ] > arr [ mid ] ) returnbinarySearch ( arr , ( mid + 1 ) , high ) ;
    else returnbinarySearch ( arr , low , ( mid - 1 ) ) ;
    return - 1 ;
  }
  return - 1 ;
}
