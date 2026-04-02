#include <iostream>
int main(){
    int age, totalPrice = 0;
    //int* a = &age; //포인터는 메모리 번지 주소만 받을 수 있음
    
    int humans = 0;
    cout << "몇 분";
    cin >> humans;
    int* ages = new int[humans]; //heap memory

    for(int i = 0; i < humans; i++){
        cout << "나이";
        cin >> age;
        *(ages + i) = age;
    }
    int kid = 5000, adult = 10000, senior = 7000;
    
    for (int i = 0; i < humans; i++){
        age = *(ages + i);
        if(age >=65){
            totalPrice = totalPrice + senior;
        }
        else if(age >= 19){
            totalPrice = totalPrice + adult;
        }
        else{
            totalPrice = totalPrice + kid;
        }
    }
    //cout << ages << '\n';
    //cout << humans << '\n';
    //cout << &age << '\n';
    delete[] ages; // 배열 삭제, 메모리 누수 방지
    
    return 0;
}
