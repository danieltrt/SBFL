int f_filled ( float * arr , int n ) {
  float * leftMax = new float [ n ] ;
  leftMax [ 0 ] = ( float ) - FLT_MAX ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) leftMax [ i ] = std :: max ( leftMax [ i - 1 ] , arr [ i - 1 ] ) ;
  float rightMin = ( float ) FLT_MAX ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    if ( leftMax [ i ] < arr [ i ] && rightMin > arr [ i ] ) return i ;
    rightMin = std :: min ( rightMin , arr [ i ] ) ;
  }
  return - 1 ;
}
