float findArea ( float a, float b, float c ) {
  if ( a < 0 || b < 0 || c < 0 || ( a + b <= c ) || a + c <= b || b + c <= a ) {
    cout << "Not a valid trianglen";
    exit ( 0 );
  }
  float s = ( a + b + c ) / 2;
  return sqrt ( s * ( s - a ) * ( s - b ) * ( s - c ) );
}