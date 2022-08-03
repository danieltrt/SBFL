static double maxArea ( double a, double b, double c, double d ) {
  double semiperimeter = ( a + b + c + d ) / 2;
  return Math . sqrt ( ( semiperimeter - a ) * ( semiperimeter - b ) * ( semiperimeter - c ) * ( semiperimeter - d ) );
}