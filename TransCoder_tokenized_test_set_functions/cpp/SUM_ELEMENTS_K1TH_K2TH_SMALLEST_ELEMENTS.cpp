int sumBetweenTwoKth ( int arr [ ], int n, int k1, int k2 ) {
  sort ( arr, arr + n );
  return accumulate ( arr + k1, arr + k2 - 1, 0 );
}