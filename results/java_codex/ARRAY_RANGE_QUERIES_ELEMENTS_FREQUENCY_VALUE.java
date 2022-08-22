int solveQuery ( int start, int end, int arr [ ] ) {
  map < int, int > mp;
  for ( int i = start;
  i <= end;
  i ++ ) mp [ arr [ i ] ] = mp [ arr [ i ] ] == null ? 1 : mp [ arr [ i ] ] + 1;
  int count = 0;
  for ( auto entry : mp ) if ( entry . first == entry . second ) count ++;
  return count;
}