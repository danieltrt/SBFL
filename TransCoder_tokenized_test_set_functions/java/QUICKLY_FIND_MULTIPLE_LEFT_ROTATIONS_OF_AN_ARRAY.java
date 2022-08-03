static void leftRotate ( int arr [ ], int n, int k ) {
  for ( int i = k;
  i < k + n;
  i ++ ) System . out . print ( arr [ i % n ] + " " );
}