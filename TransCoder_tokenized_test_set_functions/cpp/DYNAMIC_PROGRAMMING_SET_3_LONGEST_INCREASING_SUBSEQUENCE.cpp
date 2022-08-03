int lis ( int arr [ ], int n ) {
  int max = 1;
  _lis ( arr, n, & max );
  return max;
}