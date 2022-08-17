int f_filled ( int array [ ] , int start , int end ) {
  if ( start > end ) return end + 1 ;
  if ( start != array [ start ] ) return start ;
  int mid = ( start + end ) / 2 ;
  if ( array [ mid ] == mid ) return f_filled ( array , mid + 1 , end ) ;
  return f_filled ( array , start , mid ) ;
}
