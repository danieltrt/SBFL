void printArray ( int arr [ ] [ 5 ], int row, int col ) {
  unordered_set < string > uset;
  for ( int i = 0;
  i < row;
  i ++ ) {
    string s = "";
    for ( int j = 0;
    j < col;
    j ++ ) s += to_string ( arr [ i ] [ j ] );
    if ( uset . count ( s ) == 0 ) {
      uset . insert ( s );
      cout << s << endl;
    }
  }
}