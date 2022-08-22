void findRandomIndexOfMax ( int arr [ ], int n ) {
  unordered_map < int, int > mp;
  for ( int i = 0;
  i < n;
  i ++ ) if ( mp . find ( arr [ i ] ) != mp . end ( ) ) {
    mp [ arr [ i ] ] = mp [ arr [ i ] ] + 1;
  }
  else {
    mp [ arr [ i ] ] = 1;
  }
  int max_element = INT_MIN;
  int max_so_far = INT_MIN;
  for ( auto p : mp ) {
    if ( p . second > max_so_far ) {
      max_so_far = p . second;
      max_element = p . first;
    }
  }
  int r = ( int ) ( ( rand ( ) % max_so_far ) + 1 );
  for ( int i = 0, count = 0;
  i < n;
  i ++ ) {
    if ( arr [ i ] == max_element ) count ++;
    if ( count == r ) {
      cout << "Element with maximum frequency present " << "at index " << i << "\n";
      break;
    }
  }
}