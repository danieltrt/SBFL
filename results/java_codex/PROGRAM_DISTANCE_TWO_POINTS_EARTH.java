double distance ( double lat1, double lat2, double lon1, double lon2 ) {
  lon1 = toRadians ( lon1 );
  lon2 = toRadians ( lon2 );
  lat1 = toRadians ( lat1 );
  lat2 = toRadians ( lat2 );
  double dlon = lon2 - lon1;
  double dlat = lat2 - lat1;
  double a = pow ( sin ( dlat / 2 ), 2 ) + cos ( lat1 ) * cos ( lat2 ) * pow ( sin ( dlon / 2 ), 2 );
  double c = 2 * asin ( sqrt ( a ) );
  double r = 6371;
  return ( c * r );
}