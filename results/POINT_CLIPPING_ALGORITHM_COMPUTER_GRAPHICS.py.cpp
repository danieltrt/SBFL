void pointClip ( double * XY , int n , double Xmin , double Ymin , double Xmax , double Ymax ) {
  cout << "Point inside the viewing pane:" << endl ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( ( XY [ i ] [ 0 ] >= Xmin ) && ( XY [ i ] [ 0 ] <= Xmax ) ) || ( ( XY [ i ] [ 1 ] >= Ymin ) && ( XY [ i ] [ 1 ] <= Ymax ) ) ) {
      if ( ( ( XY [ i ] [ 0 ] < Xmin ) && ( XY [ i ] [ 0 ] > Xmax ) ) {
        cout << "[" << XY [ i ] [ 0 ] << ", " << XY [ i ] [ 1 ] << "]" << endl ;
      }
    }
  }
  cout << "\n\nPoint outside the viewing pane:" << endl ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( ( XY [ i ] [ 0 ] < Xmin ) || ( XY [ i ] [ 0 ] > Xmax ) ) ) {
      cout << "[" << XY [ i ] [ 0 ] << ", " << XY [ i ] [ 1 ] << "]" << endl ;
    }
    if ( ( ( XY [ i ] [ 1 ] < Ymin ) || ( XY [ i ] [ 1 ] > Ymax ) ) {
      cout << "[" << XY [ i ] [ 0 ] << ", " << XY [ i ] [ 1 ] << "]" << endl ;
    }
  }
}
