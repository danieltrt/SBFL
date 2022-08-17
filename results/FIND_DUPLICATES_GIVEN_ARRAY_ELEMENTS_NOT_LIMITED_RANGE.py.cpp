void printDuplicates ( string arr ) {
  map < string , int > map ;
  for ( string ele : arr ) {
    stringstream ss ;
    ss << ele ;
    map [ ele ] ++ ;
  }
  for ( map . size ( ) > 0 ) {
    if ( ( map [ map [ 0 ] ] > 1 ) || ( map [ map [ 0 ] ] == 0 ) ) cout << map [ 0 ] << " " ;
  }
  cout << "\n" ;
}
