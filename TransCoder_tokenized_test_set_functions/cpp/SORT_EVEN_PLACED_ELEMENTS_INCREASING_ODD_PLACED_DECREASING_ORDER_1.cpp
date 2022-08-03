void bitonicGenerator ( int arr [ ], int n ) {
  int i = 1;
  int j = n - 1;
  if ( j % 2 != 0 ) j --;
  while ( i < j ) {
    swap ( arr [ i ], arr [ j ] );
    i += 2;
    j -= 2;
  }
  sort ( arr, arr + ( n + 1 ) / 2 );
  sort ( arr + ( n + 1 ) / 2, arr + n, greater < int > ( ) );
}