int f_filled ( int * arr , int n , int k ) {
  int um [ n ] , currRem , maxSum ;
  int i , j ;
  int sum ;
  int * sm = new int [ n ] ;
  sm [ 0 ] = arr [ 0 ] ;
  for ( i = 1 ;
  i < n ;
  i ++ ) sm [ i ] = sm [ i - 1 ] + arr [ i ] ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    currRem = sm [ i ] % k ;
    if ( ( ! currRem ) && maxSum < sm [ i ] ) maxSum = sm [ i ] ;
    else if ( ( ! currRem ) && um [ currRem ] == 0 ) um [ currRem ] = i ;
    else if ( ( maxSum < ( sm [ i ] - sm [ um [ currRem ] ] ) ) ) maxSum = sm [ i ] - sm [ um [ currRem ] ] ;
  }
  return maxSum / k ;
}
