void printRepeating ( int arr [ ], int size ) {
  int * count = new int [ sizeof ( int ) * ( size - 2 ) ];
  int i;
  cout << " Repeating elements are ";
  for ( i = 0;
  i < size;
  i ++ ) {
    if ( count [ arr [ i ] ] == 1 ) cout << arr [ i ] << " ";
    else count [ arr [ i ] ] ++;
  }
}