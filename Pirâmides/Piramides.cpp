#include <iostream>
#include <string>

int main()
{
  int a;
  std::cin >> a;
   for (int i = 1; i <= a; i++){
        for (int t = 1; t<=i;t++){
            std::cout << "*";
        }
        std :: cout << std :: endl;
    }
    
     for (int i = a -1; i >= 1; i--){
        for (int t = 1; t<=i;t++){
            std::cout << "*";
        }
        std :: cout << std :: endl;
    }
}
