void generate ( int ones, int zeroes, string str, int len ) {
  if ( len == str . length ( ) ) {
    cout << str << " ";
    return;
  }
  generate ( ones + 1, zeroes, str + "1", len );
  if ( ones > zeroes ) {
    generate ( ones, zeroes + 1, str + "0", len );
  }
}