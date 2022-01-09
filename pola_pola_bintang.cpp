/******************************************************************************

Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int x;
int switch_var;
int main()
{
    std::cout<<"++++++++++++++++++++++++++++++++++++"<<" \n";
    std::cout<<"1. Segitiga bawah dan sisanya bintang"<<" \n";
    std::cout<<"2. Diagonal silang"<<" \n";
    std::cout<<"3. Kotak dengan bagian dalam kosong"<<" \n";
    std::cout<<"++++++++++++++++++++++++++++++++++++++"<<" \n";
    std::cout<<"Tentukan pilihanmu lur :";
    std::cin>>switch_var;
    switch (switch_var){
        case 1 :
            std::cout<<"Masukan elemen yang diinginkan dari segitiga bawah (Usahakan Ganjil) :";
            std::cin>>x;
        
            for (int i=0; i<x; i++){
                for(int j=0; j<x; j++){
                    if (j <= i){
                        std::cout<<i<<" ";
                    } else {
                        std::cout<<"*"<<" ";
                    }
                }
                std::cout<<"\n";
            }
            break;
        case 2 :
            std::cout<<"Jumlah elemen yang diinginkan (Usahakan Ganjil):";
            std::cin>>x;
            for (int i=0; i<x; i++){
                for(int j=0; j<x; j++){
                    if (i < (x-1)/2){
                        if ((j != i) && (j != (x-1) - i)){
                            std::cout<<" ";
                        } else {
                            std::cout<<"*";
                        }
                    } else if (i == (x-1)/2){
                        if ( j != i){
                            std::cout<<" ";
                        }else{
                            std::cout<<"*";
                        }
                    } else {
                        if ((j != ((x-1)-i)) && (j != ((x-1) - ((x-1) - i) ))){
                            std::cout<<" ";
                        } else{
                            std::cout<<"*";
                        }
                    }
                }
                std::cout<<" \n";
            }
            break;
        case 3 :
            std::cout<<"Jumlah elemen yang diinginkan :";
            std::cin>>x;
            for(int i=0; i<x; i++){
                for(int j=0; j<x; j++){
                    if ((i != 0) && (i != (x-1))){
                        if ((j!=0) && (j!= (x-1))){
                            std::cout<<" ";
                        }else{
                            std::cout<<"*";
                        }
                    } else {
                        std::cout<<"*";
                    }
                }
                std::cout<<" \n";
            }
        
            break;
    }

    return 0;
}
