#include <iostream>

#define SIZE 5

int main(){
    long value1=200000;
    long value2;
    long *long_ptr;
    
    long_ptr = &value1;
    
    std:: cout<<*long_ptr;
    std :: cout << " " ;
    
    value2 = *long_ptr;

    std:: cout<<value2;
    std :: cout << " " ;

    
    std :: cout << &value1;
    std :: cout << " " ;

    std :: cout << long_ptr;//7
    std :: cout << " " ;

    if(&value1 == long_ptr){
    std :: cout << 1; //8
    std :: cout << " " ;
    }

    
    unsigned int values[] = {2, 4, 6, 8, 10};//9
    
    unsigned int *v_ptr; //10
    
    for (int i  = 0; i<5; i++){
        std :: cout << values[i] ; //11
        std :: cout << " " ;

    }
    
    v_ptr = &values[0]; //12 - falta fazer de outra forma
    
    for (int i = 0; i < 5; i++){
        std :: cout << *(values + i) ; //13
        std :: cout << " " ;

    }
    
    for (int i = 0; i < 5; i++){
        std :: cout << *(v_ptr + i) ; //13
        std :: cout << " " ;

    }
    
    for (int i = 0; i < 5; i++){
        std :: cout << v_ptr[i]; //13
        std :: cout << " " ;

    }
    
    std :: cout << values[4] << " ";
    std :: cout << *(v_ptr + 4) << " ";
    std :: cout << *(values + 4) << " ";
    std :: cout << v_ptr[4] << " ";
    
    std :: cout << v_ptr + 3 << " ";
    std :: cout << *(v_ptr + 3) << " ";
    std :: cout << v_ptr + 3 << " ";
    
    v_ptr = &values[4];  
    
    std :: cout << *(v_ptr - 4) << " ";
    
    
return 0;
}
