void printRotatedString ( string str ) {
  int n = str . length ( );
  string sb = str + str ;
  for ( int i = 0;
  i < n;
  i ++ ) {
    for ( int j = 0;
    j != n;
    j ++ ) cout << sb [ i + j ] ;
    cout << endl ;
  }
}