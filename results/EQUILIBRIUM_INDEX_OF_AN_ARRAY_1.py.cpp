int equilibrium ( int arr [ ] ) {
  int totalSum = sum ( arr ) ;
  int leftSum = 0 ;
  for ( int i = 0 , num = arr [ 0 ] ;
  i < num ;
  i ++ ) {
    totalSum -= arr [ i ] ;
    if ( leftSum == totalSum ) return i ;
    leftSum += arr [ i ] ;
  }
  return - 1 ;
}
