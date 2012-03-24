#include "pokevect.h"
#include <iostream>

int main ( ) {

	Pokevect vect(5) ;

	vect.assign( 5 , 0 ) ;
	vect.assign( 30 , 1 ) ;
	vect.assign( 2 , 2 ) ;
	vect.assign( 32 , 3 ) ;
	vect.assign( 1 , 4 ) ;
	vect.assign( 10 , 5 ) ;

	vect.print() ;

	vect.sort_decrescente() ;
	vect.print() ;

	vect.sort_crescente() ;
	vect.print() ;
	
	std::cout << vect.get_max() << std::endl ;
	std::cout << vect.get_min() << std::endl ;
	std::cout << vect.somma() << std::endl ;
	std::cout << vect.binary_search(1) << std::endl ;
	std::cout << vect.media() << std::endl ;

	return 0 ;

}
