int lis ( int arr [ ] ) {
  int maximum ;
  int n = sizeof ( arr ) / sizeof ( int ) ;
  maximum = 1 ;
  _lis ( arr , n ) ;
  return maximum ;
}
