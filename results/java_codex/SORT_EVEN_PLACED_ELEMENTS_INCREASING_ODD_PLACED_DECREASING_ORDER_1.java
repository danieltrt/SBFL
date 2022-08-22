void bitonicGenerator ( int arr [ ], int n ) {
  int i = 1;
  int j = n - 1;
  if ( j % 2 != 0 ) j --;
  while ( i < j ) {
    arr = swap ( arr, i, j );
    i += 2;
    j -= 2;
  }
  Arrays . sort ( arr, 0, ( n + 1 ) / 2 );
  Arrays . sort ( arr, ( n + 1 ) / 2, n );
  int low = ( n + 1 ) / 2, high = n - 1;
  while ( low < high ) {
    Integer temp = arr [ low ];
    arr [ low ] = arr [ high ];
    arr [ high ] = temp;
    low ++;
    high --;
  }
}