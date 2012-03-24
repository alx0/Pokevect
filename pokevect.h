class Pokevect {

	private :
		int *v ;
		int size_v ;

	public :

		Pokevect( int ) ;
		~Pokevect() ;
		void assign( int , int ) ;
		void print( ) ;
		int* sort_crescente( ) ;
		int* sort_decrescente() ;
		int somma( ) ;
		double media( ) ;
		bool binary_search( int ) ;
		int get_min( ) ;
		int get_max( ) ;
		void swap( int , int ) ;

} ;
