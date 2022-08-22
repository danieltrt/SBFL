void direction ( int R, int C ) {
  if ( R != C && R % 2 == 0 && C % 2 != 0 && R < C ) {
    cout << "Left" << endl;
    return;
  }
  if ( R != C && R % 2 != 0 && C % 2 == 0 && R > C ) {
    cout << "Up" << endl;
    return;
  }
  if ( R == C && R % 2 != 0 && C % 2 != 0 ) {
    cout << "Right" << endl;
    return;
  }
  if ( R == C && R % 2 == 0 && C % 2 == 0 ) {
    cout << "Left" << endl;
    return;
  }
  if ( R != C && R % 2 != 0 && C % 2 != 0 && R < C ) {
    cout << "Right" << endl;
    return;
  }
  if ( R != C && R % 2 != 0 && C % 2 != 0 && R > C ) {
    cout << "Down" << endl;
    return;
  }
  if ( R != C && R % 2 == 0 && C % 2 == 0 && R < C ) {
    cout << "Left" << endl;
    return;
  }
  if ( R != C && R % 2 == 0 && C % 2 == 0 && R > C ) {
    cout << "Up" << endl;
    return;
  }
  if ( R != C && R % 2 == 0 && C % 2 != 0 && R > C ) {
    cout << "Down" << endl;
    return;
  }
  if ( R != C && R % 2 != 0 && C % 2 == 0 && R < C ) {
    cout << "Right" << endl;
    return;
  }
}