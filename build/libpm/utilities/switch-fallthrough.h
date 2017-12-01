//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//
//  Detection of fallthrough in switch statements (GCC 7)
//
//  Copyright (C) 2017 Pierre Molinaro.
//
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#pragma once

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#if __GNUC__ < 7
  #define FALLTHROUGH
#else
  #define FALLTHROUGH __attribute__ ((fallthrough)) ;
#endif

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
