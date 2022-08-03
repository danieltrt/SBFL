static Boolean subArrayExists ( int arr [ ] ) {
  HashMap < Integer, Integer > hM = new HashMap < Integer, Integer > ( );
  int sum = 0;
  for ( int i = 0;
  i < arr . length;
  i ++ ) {
    sum += arr [ i ];
    if ( arr [ i ] == 0 || sum == 0 || hM . get ( sum ) != null ) return true;
    hM . put ( sum, i );
  }
  return false;
}