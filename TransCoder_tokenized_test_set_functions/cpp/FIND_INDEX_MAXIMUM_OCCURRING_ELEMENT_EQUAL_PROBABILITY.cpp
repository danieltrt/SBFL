void findRandomIndexOfMax ( int arr [ ], int n ) {
  unordered_map < int, int > freq;
  for ( int i = 0;
  i < n;
  i ++ ) freq [ arr [ i ] ] += 1;
  int max_element;
  int max_so_far = INT_MIN;
  for ( pair < int, int > p : freq ) {
    if ( p . second > max_so_far ) {
      max_so_far = p . second;
      max_element = p . first;
    }
  }
  int r = ( rand ( ) % max_so_far ) + 1;
  for ( int i = 0, count = 0;
  i < n;
  i ++ ) {
    if ( arr [ i ] == max_element ) count ++;
    if ( count == r ) {
      cout << "Element with maximum frequency present " "at index " << i << endl;
      break;
    }
  }
}