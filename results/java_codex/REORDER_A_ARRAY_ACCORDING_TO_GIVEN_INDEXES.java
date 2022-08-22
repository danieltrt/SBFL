void reorder ( ) {
  int temp [ arr . length ];
  for ( int i = 0;
  i < arr . length;
  i ++ ) temp [ index [ i ] ] = arr [ i ];
  for ( int i = 0;
  i < arr . length;
  i ++ ) {
    arr [ i ] = temp [ i ];
    index [ i ] = i;
  }
}