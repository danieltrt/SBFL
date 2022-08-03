void findElements ( int arr [ ], int n ) {
  int first = INT_MIN, second = INT_MIN;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( arr [ i ] > first ) {
      second = first;
      first = arr [ i ];
    }
    else if ( arr [ i ] > second ) second = arr [ i ];
  }
  for ( int i = 0;
  i < n;
  i ++ ) if ( arr [ i ] < second ) cout << arr [ i ] << " ";
}