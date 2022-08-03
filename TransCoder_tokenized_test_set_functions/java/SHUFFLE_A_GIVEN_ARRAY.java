static void randomize ( int arr [ ], int n ) {
  Random r = new Random ( );
  for ( int i = n - 1;
  i > 0;
  i -- ) {
    int j = r . nextInt ( i + 1 );
    int temp = arr [ i ];
    arr [ i ] = arr [ j ];
    arr [ j ] = temp;
  }
  System . out . println ( Arrays . toString ( arr ) );
}