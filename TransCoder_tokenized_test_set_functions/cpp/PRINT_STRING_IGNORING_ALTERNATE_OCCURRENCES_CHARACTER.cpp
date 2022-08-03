void printStringAlternate ( string str ) {
  unordered_map < char, int > occ;
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    char temp = tolower ( str [ i ] );
    occ [ temp ] ++;
    if ( occ [ temp ] & 1 ) cout << str [ i ];
  }
  cout << endl;
}