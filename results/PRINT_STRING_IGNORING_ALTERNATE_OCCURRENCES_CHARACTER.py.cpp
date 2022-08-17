void printStringAlternate ( string string ) {
  unordered_map < string , int > occ ;
  for ( int i = 0 ;
  i != string . length ( ) ;
  i ++ ) {
    string [ i ] = tolower ( string [ i ] ) ;
    occ [ temp ] = occ . find ( string [ i ] ) -> second + 1 ;
    if ( occ [ temp ] & 1 ) cout << string [ i ] << " " ;
  }
  cout << endl ;
}
