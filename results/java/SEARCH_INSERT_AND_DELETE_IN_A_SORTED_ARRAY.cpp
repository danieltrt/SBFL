int f_filled ( int arr [ ] , int low , int high , int key ) {
  if ( high < low ) return - 1 ;
  int mid = ( low + high ) / 2 ;
  if ( key == arr [ mid ] ) return mid ;
  if ( key > arr [ mid ] ) return f_filled ( arr , ( mid + 1 ) , high , key ) ;
  return f_filled ( arr , low , ( mid - 1 ) , key ) ;
}
