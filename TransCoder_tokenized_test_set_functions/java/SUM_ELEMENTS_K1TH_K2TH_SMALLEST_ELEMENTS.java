static int sumBetweenTwoKth ( int arr [ ], int k1, int k2 ) {
  Arrays . sort ( arr );
  int result = 0;
  for ( int i = k1;
  i < k2 - 1;
  i ++ ) result += arr [ i ];
  return result;
}