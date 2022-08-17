int minAbsSumPair ( int * arr , int arrSize ) {
  int invCount = 0 ;
  if ( arrSize < 2 ) {
    cout << "Invalid Input" << endl ;
    return 0 ;
  }
  int minL = 0 ;
  int minR = 1 ;
  int minSum = arr [ 0 ] + arr [ 1 ] ;
  for ( int l = 0 ;
  l <= arrSize - 1 ;
  l ++ ) {
    for ( int r = l + 1 ;
    r <= arrSize ;
    r ++ ) {
      int sum = arr [ l ] + arr [ r ] ;
      if ( abs ( minSum ) > abs ( sum ) ) {
        minSum = sum ;
        minL = l ;
        minR = r ;
      }
    }
  }
  cout << "The two elements whose sum is minimum are" << arr [ minL ] << " and " << arr [ minR ] << endl ;
  return 0 ;
}
