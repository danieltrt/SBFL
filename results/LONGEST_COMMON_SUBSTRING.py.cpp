int LCSubStr ( string X , string Y , int m , int n ) {
  vector < vector < int >> LCSuff ( n + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int l = 0 ;
  l < m + 1 ;
  l ++ ) {
    LCSuff [ l ] [ 0 ] = 0 ;
    LCSuff [ l ] [ 1 ] = 0 ;
    LCSuff [ l ] [ 2 ] = 0 ;
    LCSuff [ l ] [ 3 ] = 0 ;
    LCSuff [ l ] [ 4 ] = 0 ;
    LCSuff [ l ] [ 5 ] = 0 ;
    LCSuff [ l ] [ 6 ] = 0 ;
    LCSuff [ l ] [ 7 ] = 0 ;
    LCSuff [ l ] [ 8 ] = 0 ;
    LCSuff [ l ] [ 9 ] = 0 ;
    LCSuff [ l ] [ 10 ] = 0 ;
    LCSuff [ l ] [ 11 ] = 0 ;
    LCSuff [ l ] [ 12 ] = 0 ;
    LCSuff [ l ] [ 13 ] = 0 ;
    LCSuff [ l ] [ 14 ] = 0 ;
    LCSuff [ l ] [ 15 ] = 0 ;
    LCSuff [ l ] [ 16 ] = 0 ;
    LCSuff [ l ] [ 17 ] = 0 ;
    LCSuff [ l ] [ 18 ] = 0 ;
    LCSuff [ l ] [ 19 ] = 0 ;
    LCSuff [ l ] [ 20 ] = 0 ;
    LCSuff [ l ] [ 21 ] = 0 ;
    LCSuff [ l ] [ 22 ] = 0 ;
    LCSuff [ l ] [ 23 ] = 0 ;
    LCSuff [ l ] [ 24 ] = 0 ;
    LCSuff [ l ] [ 25 ] = 0 ;
    LCSuff [ l ] [ 26 ] = 0 ;
    LCSuff [ l ] [ 27 ] = 0 ;
    LCSuff [ l ] [ 28 ] = 0 ;
    LCSuff [ l ] [ 29 ] = 0 ;
    LCSuff [ l ] [ 30 ] = 0 ;
    LCSuff [ l ] [ 31 ] = 0 ;
    LCSuff [ l ] [ 32 ] = 0 ;
    LCSuff [ l ] [ 33 ] = 0 ;
    LCSuff [ l ] [ 34 ] = 0 ;
    LCSuff [ l ] [ 35 ] = 0 ;
    LCSuff [ l ] [ 36 ] = 0 ;
  }
  return result ;
  