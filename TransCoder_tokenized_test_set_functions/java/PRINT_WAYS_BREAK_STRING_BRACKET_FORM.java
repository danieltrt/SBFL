static void findCombinations ( String str, int index, String out ) {
  if ( index == str . length ( ) ) System . out . println ( out );
  for ( int i = index;
  i < str . length ( );
  i ++ ) findCombinations ( str, i + 1, out + "(" + str . substring ( index, i + 1 ) + ")" );
}