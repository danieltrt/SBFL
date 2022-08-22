void printRotatedString ( string str ) {
  int len = str . length ( );
  string sb;
  for ( int i = 0;
  i < len;
  i ++ ) {
    sb = "";
    int j = i;
    int k = 0;
    for ( int k2 = j;
    k2 < str . length ( );
    k2 ++ ) {
      sb . insert ( k, str . charAt ( j ) );
      k ++;
      j ++;
    }
    j = 0;
    while ( j < i ) {
      sb . insert ( k, str . charAt ( j ) );
      j ++;
      k ++;
    }
    cout << sb << endl;
  }
}