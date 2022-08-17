void rearrange ( int * arr , int n ) {
  int maxEle = arr [ n - 1 ] ;
  int minEle = arr [ 0 ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( i % 2 == 0 ) {
      arr [ i ] = maxEle ;
      maxEle -- ;
    }
    else {
      arr [ i ] = minEle ;
      minEle ++ ;
    }
  }
}
