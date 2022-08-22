void pointClip ( int XY [ ] [ ], int n, int Xmin, int Ymin, int Xmax, int Ymax ) {
  cout << "Point inside the viewing pane:" << endl;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( ( XY [ i ] [ 0 ] >= Xmin ) && ( XY [ i ] [ 0 ] <= Xmax ) ) {
      if ( ( XY [ i ] [ 1 ] >= Ymin ) && ( XY [ i ] [ 1 ] <= Ymax ) ) cout << "[" << XY [ i ] [ 0 ] << ", " << XY [ i ] [ 1 ] << "] ";
    }
  }
  cout << endl << "Point outside the viewing pane:" << endl;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( ( XY [ i ] [ 0 ] < Xmin ) || ( XY [ i ] [ 0 ] > Xmax ) ) cout << "[" << XY [ i ] [ 0 ] << ", " << XY [ i ] [ 1 ] << "] ";
    if ( ( XY [ i ] [ 1 ] < Ymin ) || ( XY [ i ] [ 1 ] > Ymax ) ) cout << "[" << XY [ i ] [ 0 ] << ", " << XY [ i ] [ 1 ] << "] ";
  }
}