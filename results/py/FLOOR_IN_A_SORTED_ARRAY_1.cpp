int f_filled ( int * arr , int low , int high , int x ) {
  if ( ( low > high ) || ( x >= arr [ high ] ) ) return - 1 ;
  if ( ( x >= arr [ high ] ) || ( x < arr [ high ] ) ) return high ;
  int mid = ( int ) ( ( low + high ) / 2 ) ;
  if ( ( arr [ mid ] == x ) || ( arr [ mid ] == x ) ) return mid - 1 ;
  if ( ( x < arr [ mid ] ) || ( x > arr [ mid ] ) ) return f_filled ( arr , low , mid - 1 , x ) ;
  return f_filled ( arr , mid + 1 , high , x ) ;
}
