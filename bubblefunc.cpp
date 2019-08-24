/*------DECLARATIONS------*/
#include <iostream>
using namespace std;

/*_bubblesort_ con punteros a funcion*/
void * _bubblesort_(void * _array_,int _tam_ , void (*_puntero_) (void *, int _i, int _k)){
	for (int i = 0; i < _tam_ ; i ++)
		for(int k = 0; k < _tam_-1; k++)
			_puntero_(_array_,k,k+1);
		return _array_;
}

/*------FUNCTIONS------*/

void  _b_int_ (void * _vector_, int _i,int _k){
	int temp = ( (int*) _vector_)[_i] ;
	if( ((int*) _vector_)[_i]  > ((int*) _vector_)[_k]){	
		((int*)_vector_)[_i] =( (int*) _vector_)[_k];
		((int*)_vector_)[_k] = temp ; 
	}
	
	
}

void  _b_float_ (void * _vector_, int _i,int _k){
	
	float temp = ( (float*) _vector_)[_i] ;
	if( ((float*) _vector_)[_i]  > ((float*) _vector_)[_k]){	
		((float*)_vector_)[_i] =( (float*) _vector_)[_k];
		((float*)_vector_)[_k] = temp ; 
	}
}

void  _b_double_ (void * _vector_, int _i,int _k){

	double temp = ( (double*) _vector_)[_i] ;
	if( ((double*) _vector_)[_i]  > ((double*) _vector_)[_k]){	
		((double*)_vector_)[_i] =( (double*) _vector_)[_k];
		((double*)_vector_)[_k] = temp ; 
	}
}


void  _b_char_ (void * _vector_, int _i,int _k){

	char temp = ( (char*) _vector_)[_i] ;
	if( ((char*) _vector_)[_i]  > ((char*) _vector_)[_k]){	
		((char*)_vector_)[_i] =( (char*) _vector_)[_k];
		((char*)_vector_)[_k] = temp ; 
	}
}



/*------MAIN------*/
int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9};
	float _array_2 [5] = {4,5.00005,9,7,2};
	double _array_3 [5] = {3.0,8.5,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,5,_b_int_);	
	_bubblesort_(_array_2,5,_b_float_);
	_bubblesort_(_array_3,5,_b_double_);
	_bubblesort_(_array_4,6,_b_char_);
	for (int i =0; i<5;i++)
	 std::cout<< _array_1[i]<<" ";
	std::cout<<std::endl;
	
	for (int i =0; i<5;i++)
	 std::cout<< _array_2[i]<<" ";
	std::cout<<std::endl;


	for (int i =0; i<5;i++)
	 std::cout<< _array_3[i]<<" ";
	std::cout<<std::endl;

	for (int i =0; i<5;i++)
	 std::cout<< _array_4[i]<<" ";
	std::cout<<std::endl;

    return 0;
}

