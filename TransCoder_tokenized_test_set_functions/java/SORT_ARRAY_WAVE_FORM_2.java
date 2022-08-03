void sortInWave ( int arr [ ], int n ) {
  Arrays . sort ( arr );
  for ( int i = 0;
  i < n - 1;
  i += 2 ) swap ( arr, i, i + 1 );
}