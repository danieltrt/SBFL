bool areEqual ( int arr1 [ ], int arr2 [ ] ) {
  int n = sizeof ( arr1 ) / sizeof ( arr1 [ 0 ] );
  int m = sizeof ( arr2 ) / sizeof ( arr2 [ 0 ] );
  if ( n != m ) return false;
  sort ( arr1, arr1 + n );
  sort ( arr2, arr2 + m );
  for ( int i = 0;
  i < n;
  i ++ ) if ( arr1 [ i ] != arr2 [ i ] ) return false;
  return true;
}