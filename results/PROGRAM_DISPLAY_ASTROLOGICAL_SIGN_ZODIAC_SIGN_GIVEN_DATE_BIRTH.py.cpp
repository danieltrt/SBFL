string zodiac_sign ( int day , string month ) {
  switch ( month ) {
    case "december" : string astro_sign = ( day < 22 ) ? "Sagittarius" : "capricorn" ;
    break ;
    case "january" : string astro_sign = ( day < 20 ) ? "Capricorn" : "aquarius" ;
    break ;
    case "february" : string astro_sign = ( day < 19 ) ? "Aquarius" : "pisces" ;
    break ;
    case "march" : string astro_sign = ( day < 21 ) ? "Pisces" : "aries" ;
    break ;
    case "april" : string astro_sign = ( day < 20 ) ? "Aries" : "taurus" ;
    break ;
    case "may" : string astro_sign = ( day < 21 ) ? "Taurus" : "gemini" ;
    break ;
    case "june" : string astro_sign = ( day < 21 ) ? "Gemini" : "cancer" ;
    break ;
    case "july" : string astro_sign = ( day < 23 ) ? "Cancer" : "leo" ;
    break ;
    case "august" : string astro_sign = ( day < 23 ) ? "Leo" : "virgo" ;
    break ;
    case "september" : string astro_sign = ( day < 23 ) ? "Virgo" : "libra" ;
    break ;
    case "october" : string astro_sign = ( day < 23 ) ? "Libra" : "scorpio" ;
    break ;
    case "november" : string astro_sign = ( day < 22 ) ? "scorpio" : "sagittarius" ;
    break ;
  }
  cout << astro_sign << endl ;
  return "" ;
}
