int findMaximum ( int arr [ ] , int low , int high ) {
  if ( low == high ) return arr [ low ] ;
  if ( ( high == low + 1 ) && arr [ low ] >= arr [ high ] ) return arr [ low ] ;
  if ( ( high == low + 1 ) && arr [ low ] < arr [ high ] ) return arr [ high ] ;
  int mid = ( low + high ) / 2 ;
  if ( arr [ mid ] > arr [ mid + 1 ] && arr [ mid ] > arr [ mid - 1 ] ) return arr [ mid ] ;
  if ( arr [ mid ] > arr [ mid + 1 ] && arr [ mid ] < arr [ mid - 1 ] ) return findMaximum ( arr , low , mid - 1 ) ;
  else return findMaximum ( arr , mid + 1 , high ) ;
}
