void carveCross ( string str ) {
  int n = str . length ( ) ;
  if ( ( n % 2 == 0 ) && ( str . length ( ) % 2 == 0 ) ) cout << "Not possible. Please enter " << "odd length string.\n" ;
  else {
    vector < vector < bool >> arr ( max , vector < bool > ( max , false ) ) ;
    int i = 0 ;
    int j = 0 ;
    int m = n / 2 ;
    foriinrange ( n ) {
      forjinrange ( n ) {
        arr [ i ] [ j ] = 'X' ;
      }
    }
    foriinrange ( n ) {
      arr [ i ] [ m ] = str [ i ] ;
    }
    foriinrange ( n ) {
      arr [ m ] [ i ] = str [ i ] ;
    }
    foriinrange ( n ) {
      forjinrange ( n ) {
        cout << arr [ i ] [ j ] << " " ;
      }
      cout << endl ;
    }
  }
  