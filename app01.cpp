#include <iostream>
int main(){
    int age;
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

    for (int i = 0; i < humans; i++){
        cout << *(ages + i) << '\n';
    }
    //cout << ages << '\n';
    //cout << humans << '\n';
    //cout << &age << '\n';
    delete[] ages; // 배열 삭제, 메모리 누수 방지
    
    return 0;
}
