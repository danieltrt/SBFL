int minJumps ( int arr [ ], int n ) {
  if ( n == 1 ) return 0;
  int res = INT_MAX;
  for ( int i = n - 2;
  i >= 0;
  i -- ) {
    if ( i + arr [ i ] >= n - 1 ) {
      int sub_res = minJumps ( arr, i + 1 );
      if ( sub_res != INT_MAX ) res = min ( res, sub_res + 1 );
    }
  }
  return res;
}