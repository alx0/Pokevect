#include "pokevect.h"
#include <iostream>
#include <cstdlib>

using namespace std ;

Pokevect::Pokevect( int size ) {

	size_v = size ;

	v = new int [size] ;

}

void Pokevect::assign( int value , int position ) {

	if ( position > size_v ) {

		cout << "Error , Buffer Overflow! " << endl ;
		exit(0) ;

	}

	v[position] = value ;

}

void Pokevect::print( ) {

	for ( int i = 0 ; i <= size_v ; i++ )
		cout << v[i] << " " ;

	cout << endl ;

}

int* Pokevect::sort_crescente( ) {

	for ( int i = 0 ; i <= size_v-1 ; i++ ) {

		for ( int j = 0 ; j <= size_v-1 ; j++ ) {

			if ( v[j] > v[j+1] ) {

				swap( j , j+1 ) ;

			}

		}

	}

	return v ;

}

int* Pokevect::sort_decrescente( ) {

	for ( int i = 0 ; i <= size_v-1 ; i++ ) {

		for ( int j = 0 ; j <= size_v-1 ; j++ ) {

			if ( v[j] < v[j+1] ) {

				swap( j , j+1 ) ;

			}

		}

	}

	return v ;

}

int Pokevect::get_min( ) {

	int min = v[0] ;

	for ( int i = 1 ; i <= size_v ; i++ ) {

		if ( min > v[i] ) min = v[i] ;

	}

	return min ;

}

int Pokevect::get_max( ) {

	int max = v[0] ;

	for ( int i = 1 ; i <= size_v ; i++ ) {

		if ( max < v[i] ) max = v[i] ;

	}

	return max ;

}

void Pokevect::swap( int i , int ii ) {

	int tmp ;

	tmp = v[i] ;
	v[i] = v[ii] ;
	v[ii] = tmp ;

}

int Pokevect::somma( ) {

	int somma = 0 ;

	for ( int i = 0 ; i <= size_v ; i++ ) {

		somma += v[i] ;

	}

	return somma ;

}

bool Pokevect::binary_search( int lol ) {

	int i = size_v/2 ;

	if ( i == lol ) return true ;

	if ( lol > i ) {

		for ( int j = size_v/2 ; j <= size_v ; j++ ) 
			if ( v[j] == lol ) return true ;

	}

	if ( lol < i ) {

		for ( int j = size_v/2 ; j >= 0 ; j-- ) 
			if ( v[j] == lol ) return true ;

	}

	return false ;

}
	
double Pokevect::media() {

	double sum = 0 ;

	for ( int i = 0 ; i <= size_v ; i++ ) 
		sum += v[i] ;

	return sum / (size_v+1) ;

}



Pokevect::~Pokevect() {

	delete v ;

}
