void substringConversions ( string str1 , int k , double b ) {
  for ( int i = 0 ;
  i <= str1 . length ( ) - k + 1 ;
  i ++ ) {
    string sub = str1 . substr ( i , k + i ) ;
    double Sum = 0 ;
    int counter = 0 ;
    for ( int i = sub . length ( ) - 1 ;
    i >= 0 ;
    i -- ) {
      Sum = ( Sum + ( ( sub [ i ] - '0' ) * pow ( b , counter ) ) ) ;
      counter ++ ;
    }
    cout << Sum << " " ;
  }
}
