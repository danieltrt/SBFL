pair < double, double > void lineFromPoints ( pdd P, pdd Q ) {
  double a = Q . second - P . second;
  double b = P . first - Q . first;
  double c = a * ( P . first ) + b * ( P . second );
  if ( b < 0 ) {
    cout << "The line passing through points P and Q is: " << a << "x " << b << "y = " << c << endl;
  }
  else {
    cout << "The line passing through points P and Q is: " << a << "x + " << b << "y = " << c << endl;
  }
}