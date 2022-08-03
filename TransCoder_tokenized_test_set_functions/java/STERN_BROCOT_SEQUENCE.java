static void SternSequenceFunc ( Vector < Integer > BrocotSequence, int n ) {
  for ( int i = 1;
  BrocotSequence . size ( ) < n;
  i ++ ) {
    int considered_element = BrocotSequence . get ( i );
    int precedent = BrocotSequence . get ( i - 1 );
    BrocotSequence . add ( considered_element + precedent );
    BrocotSequence . add ( considered_element );
  }
  for ( int i = 0;
  i < 15;
  ++ i ) System . out . print ( BrocotSequence . get ( i ) + " " );
}