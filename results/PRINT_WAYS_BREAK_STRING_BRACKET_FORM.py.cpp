void findCombinations ( string string , int index , string out ) {
  if ( index == string . length ( ) ) cout << out << endl ;
  for ( int i = index ;
  i < string . length ( ) ;
  i += 1 ) findCombinations ( string , i + 1 , out + "(" + string . substr ( index , i + 1 ) + ")" ) ;
}
