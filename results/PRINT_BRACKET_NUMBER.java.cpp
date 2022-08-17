void printBracketNumber ( string exp , int n ) {
  int leftBnum = 1 ;
  stack < int > rightBnum ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( exp [ i ] == '(' ) {
      cout << leftBnum << " " ;
      rightBnum . push ( leftBnum ) ;
      leftBnum ++ ;
    }
    else if ( exp [ i ] == ')' ) {
      cout << rightBnum . top ( ) << " " ;
      rightBnum . pop ( ) ;
    }
  }
}
