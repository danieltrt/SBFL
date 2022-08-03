void printRepeating ( int arr [ ], int size ) {
  int count [ ] = new int [ size ];
  int i;
  System . out . println ( "Repeated elements are : " );
  for ( i = 0;
  i < size;
  i ++ ) {
    if ( count [ arr [ i ] ] == 1 ) System . out . print ( arr [ i ] + " " );
    else count [ arr [ i ] ] ++;
  }
}