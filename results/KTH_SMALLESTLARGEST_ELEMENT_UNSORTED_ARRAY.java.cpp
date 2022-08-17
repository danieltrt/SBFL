int kthSmallest ( int32_t * arr , int k ) {
  std :: sort ( arr , arr + k ) ;
  return arr [ k - 1 ] ;
}
