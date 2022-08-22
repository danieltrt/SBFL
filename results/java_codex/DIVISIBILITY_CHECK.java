void divisibilityCheck ( vector < int > arr, int n ) {
  vector < int > s;
  int max_ele = INT_MIN;
  for ( int i = 0;
  i < n;
  i ++ ) {
    s . push_back ( arr [ i ] );
    max_ele = max ( max_ele, arr [ i ] );
  }
  set < int > res;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( arr [ i ] != 0 ) for ( int j = arr [ i ] * 2;
    j <= max_ele;
    j += arr [ i ] ) {
      if ( find ( s . begin ( ), s . end ( ), j ) != s . end ( ) ) res . insert ( j );
    }
  }
  vector < int > list ( res . rbegin ( ), res . rend ( ) );
  for ( int temp : list ) cout << temp << " ";
}