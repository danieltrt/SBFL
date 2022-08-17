void lineFromPoints ( double * P , double * Q ) {
  double a = Q [ 1 ] - P [ 1 ] ;
  double b = P [ 0 ] - Q [ 0 ] ;
  double c = a * ( P [ 0 ] ) + b * ( P [ 1 ] ) ;
  if ( ( b < 0 ) && ( b > 0 ) ) cout << "The line passing through points P and Q is:" << a << "x " << b << "y = " << c << "\n" ;
  else cout << "The line passing through points P and Q is: " << a << "x + " << b << "y = " << c << "\n" ;
}
