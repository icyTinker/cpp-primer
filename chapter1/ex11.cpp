// take 2 int inputs and find the range between them
#include <iostream>

int main()
{
   int v1, v2 = 0;
   
   std::cout << "Enter two integers to get a range:" << std::endl;
   std::cout << "Enter Value 1: " << std::endl;
   std::cin >> v1;
   std::cout << "enter Value 2: " << std::endl;
   std::cin >> v2;
   
   int v3 = v1;
   int v4 = v2;
   
   while (v1 <= v2){
       std::cout << v1 << " ";
       ++v1;
   }
   while (v3 >= v4) {
       std::cout << v3 << " ";
       --v3;
   }
   

    
    return 0;
}
