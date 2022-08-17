void lineFromPoints ( pair < int , int > P , pair < int , int > Q ) {
  int a = Q [ 1 ] - P [ 1 ] ;
  int b = P [ 0 ] - Q [ 0 ] ;
  int c = a * ( P [ 0 ] ) + b * ( P [ 1 ] ) ;
  if ( b < 0 ) cout << "The line passing through points P and Q is: " << a << "x " << b << "y = " << c << endl ;
  else cout << "The line passing through points P and Q is: " << a << "x + " << b << "y = " << c << endl ;
}
