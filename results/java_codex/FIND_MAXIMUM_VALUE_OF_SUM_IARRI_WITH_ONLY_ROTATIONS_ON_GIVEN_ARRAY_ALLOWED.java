int maxSum ( ) {
  int arrSum = 0;
  int currVal = 0;
  for ( int i = 0;
  i < arr . length;
  i ++ ) {
    arrSum = arrSum + arr [ i ];
    currVal = currVal + ( i * arr [ i ] );
  }
  int maxVal = currVal;
  for ( int j = 1;
  j < arr . length;
  j ++ ) {
    currVal = currVal + arrSum - arr . length * arr [ arr . length - j ];
    if ( currVal > maxVal ) maxVal = currVal;
  }
  return maxVal;
}