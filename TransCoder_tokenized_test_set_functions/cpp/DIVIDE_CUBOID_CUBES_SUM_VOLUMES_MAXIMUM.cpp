void maximizecube ( int l, int b, int h ) {
  int side = __gcd ( l, __gcd ( b, h ) );
  int num = l / side;
  num = ( num * b / side );
  num = ( num * h / side );
  cout << side << " " << num << endl;
}