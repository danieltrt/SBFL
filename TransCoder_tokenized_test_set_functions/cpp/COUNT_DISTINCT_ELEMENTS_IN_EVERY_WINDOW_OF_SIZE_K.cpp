void countDistinct ( int arr [ ], int k, int n ) {
  map < int, int > hm;
  int dist_count = 0;
  for ( int i = 0;
  i < k;
  i ++ ) {
    if ( hm [ arr [ i ] ] == 0 ) {
      dist_count ++;
    }
    hm [ arr [ i ] ] += 1;
  }
  cout << dist_count << endl;
  for ( int i = k;
  i < n;
  i ++ ) {
    if ( hm [ arr [ i - k ] ] == 1 ) {
      dist_count --;
    }
    hm [ arr [ i - k ] ] -= 1;
    if ( hm [ arr [ i ] ] == 0 ) {
      dist_count ++;
    }
    hm [ arr [ i ] ] += 1;
    cout << dist_count << endl;
  }
}