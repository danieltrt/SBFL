static String printSequence ( String arr [ ], String input ) {
  String output = "";
  int n = input . length ( );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( input . charAt ( i ) == ' ' ) output = output + "0";
    else {
      int position = input . charAt ( i ) - 'A';
      output = output + arr [ position ];
    }
  }
  return output;
}