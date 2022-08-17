void printArray ( vector < vector < int >> & matrix ) {
  int rowCount = matrix . size ( ) ;
  if ( rowCount == 0 ) return ;
  int columnCount = matrix [ 0 ] . size ( ) ;
  if ( columnCount == 0 ) return ;
  string rowOutputFormat = " " ;
  string printed ;
  for ( int i = 0 ;
  i < columnCount ;
  i ++ ) {
    string routput = rowOutputFormat + to_string ( matrix [ i ] [ 0 ] ) ;
    if ( routput != "" ) {
      printed += routput ;
      cout << routput << endl ;
    }
  }
}
