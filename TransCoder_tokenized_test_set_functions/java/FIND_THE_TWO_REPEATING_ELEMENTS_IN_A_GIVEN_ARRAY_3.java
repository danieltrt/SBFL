void printRepeating ( int arr [ ], int size ) {
  int i;
  System . out . println ( "The repeating elements are : " );
  for ( i = 0;
  i < size;
  i ++ ) {
    if ( arr [ Math . abs ( arr [ i ] ) ] > 0 ) arr [ Math . abs ( arr [ i ] ) ] = - arr [ Math . abs ( arr [ i ] ) ];
    else System . out . print ( Math . abs ( arr [ i ] ) + " " );
  }
}