void minAbsSumPair ( int arr [ ] , int arrSize ) {
  int invCount = 0 ;
  int l , r , minSum , sum , minL , minR ;
  if ( arrSize < 2 ) {
    cout << "Invalid Input" << endl ;
    return ;
  }
  minL = 0 ;
  minR = 1 ;
  minSum = arr [ 0 ] + arr [ 1 ] ;
  for ( l = 0 ;
  l < arrSize - 1 ;
  l ++ ) {
    for ( r = l + 1 ;
    r < arrSize ;
    r ++ ) {
      sum = arr [ l ] + arr [ r ] ;
      if ( abs ( minSum ) > abs ( sum ) ) {
        minSum = sum ;
        minL = l ;
        minR = r ;
      }
    }
  }
  cout << " The two elements whose " << "sum is minimum are " << arr [ minL ] << " and " << arr [ minR ] << endl ;
}
