int findRepeating ( int arr [ ], int n ) {
  return accumulate ( arr, arr + n, 0 ) - ( ( n - 1 ) * n / 2 );
}