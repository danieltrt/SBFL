void reverseStr ( string str ) {
  int n = str . length ( );
  char [ ] ch = str . toCharArray ( );
  char temp;
  for ( int i = 0, j = n - 1;
  i < j;
  i ++, j -- ) {
    temp = ch [ i ];
    ch [ i ] = ch [ j ];
    ch [ j ] = temp;
  }
  cout << ch << endl;
}