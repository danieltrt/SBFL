int sumNodes ( int l ) {
  double leafNodeCount = pow ( 2 , l - 1 ) ;
  double sumLastLevel ;
  double sumLastLevel = ( ( leafNodeCount * ( leafNodeCount + 1 ) ) / 2 ) ;
  double sum = sumLastLevel * l ;
  return ( int ) sum ;
}
