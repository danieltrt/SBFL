int f_filled ( int * arr , int left , int right ) {
  if ( ( left <= right ) && ( arr [ left ] < arr [ right ] && arr [ mid ] > arr [ mid + 1 ] ) ) {
    int mid = ( left + right ) / 2 ;
    ;
    if ( ( arr [ mid - 1 ] < arr [ mid ] && arr [ mid ] > arr [ mid + 1 ] ) || ( arr [ mid ] < arr [ mid + 1 ] && arr [ mid ] > arr [ mid + 1 ] ) ) returnmid ++ ;
    if ( ( arr [ mid ] < arr [ mid + 1 ] ) || ( arr [ mid ] > arr [ mid + 1 ] && arr [ mid ] > arr [ mid + 1 ] ) ) returnf_filled ( arr , mid + 1 , right ) ;
    else returnf_filled ( arr , left , mid - 1 ) ;
  }
  return - 1 ;
}
