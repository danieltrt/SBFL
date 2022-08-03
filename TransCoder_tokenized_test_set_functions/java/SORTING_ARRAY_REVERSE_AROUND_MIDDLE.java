static boolean ifPossible ( int arr [ ], int n ) {
  int copy [ ] = Arrays . copyOf ( arr, arr . length );
  Arrays . sort ( copy );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( ! ( arr [ i ] == copy [ i ] ) && ! ( arr [ n - 1 - i ] == copy [ i ] ) ) return false;
  }
  return true;
}