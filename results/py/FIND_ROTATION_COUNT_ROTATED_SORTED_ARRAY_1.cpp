int f_filled ( int * arr , int low , int high ) {
  if ( ( high < low ) || ( high == low ) ) return 0 ;
  if ( ( high == low ) || ( high == high ) ) return low ;
  int mid = low + ( high - low ) / 2 ;
  ;
  mid = ( int ) mid ;
  if ( ( mid < high ) && arr [ mid + 1 ] < arr [ mid ] ) return ( mid + 1 ) ;
  if ( ( mid > low ) && arr [ mid ] < arr [ mid - 1 ] ) return mid ;
  if ( ( arr [ high ] > arr [ mid ] ) ) return f_filled ( arr , low , mid - 1 ) ;
  return f_filled ( arr , mid + 1 , high ) ;
}
