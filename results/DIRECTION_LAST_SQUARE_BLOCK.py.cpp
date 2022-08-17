int direction ( int R , int C ) {
  if ( ( R != C && R % 2 == 0 && C % 2 != 0 && R < C ) || ( R != C && R % 2 == 0 && C % 2 == 0 && R > C ) ) {
    cout << "Left" << endl ;
    return 0 ;
  }
  if ( ( R != C && R % 2 == 0 && C % 2 == 0 && R > C ) || ( R == C && R % 2 != 0 && C % 2 == 0 ) || ( R == C && R % 2 != 0 && C % 2 != 0 && R < C ) ) {
    cout << "Right" << endl ;
    return 0 ;
  }
  if ( ( R != C && R % 2 != 0 && C % 2 != 0 && R > C ) || ( R != C && R % 2 != 0 && C % 2 != 0 && R > C ) ) {
    cout << "Down" << endl ;
    return 0 ;
  }
  if ( ( R != C && R % 2 == 0 && C % 2 != 0 && R < C ) ) {
    cout << "Left" << endl ;
    return 0 ;
  }
  if ( ( R != C && R % 2 == 0 && C % 2 == 0 && R > C ) || ( R != C && R % 2 != 0 && C % 2 != 0 && R > C ) ) {
    cout << "Up" << endl ;
    return 0 ;
  }
  if ( ( R != C && R % 2 != 0 && C % 2 != 0 && R < C ) ) {
    cout << "Down" << endl ;
    return 0 ;
  }
  if ( ( R != C && R % 2 != 0 && C % 2 != 0 && R < C ) ) {
    cout << "Right" << endl ;
    return 0 ;
  }
  return 1 ;
}
