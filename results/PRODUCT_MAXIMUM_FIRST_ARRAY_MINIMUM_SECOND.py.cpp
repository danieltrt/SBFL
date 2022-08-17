double minmaxProduct ( double arr1 [ ] , double arr2 [ ] , int n1 , int n2 ) {
  sort ( arr1 , arr1 + n1 ) ;
  sort ( arr2 , arr2 + n2 ) ;
  return arr1 [ n1 - 1 ] * arr2 [ 0 ] ;
}
