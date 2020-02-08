#include <iostream>
#include <algorithm>
#include <ostream>
#include <iomanip>
using namespace std;
ostream &tab(ostream &ostream1){
    return cout<<"\t";
}

void show(int a[], int n){

    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<tab;
    }
    cout<<endl;
}

int main() {
    int a[] = {9,2,4,1,10,3,8,6,5,14};
    int n = sizeof(a)/ sizeof(a[0]);
    cout<<"Array a[] before sorting: "<<endl;
    show(a,n);
    cout<<"Array a[] after sorting: "<<endl;
    sort(a,a+n);
    show(a,n);

//    Binary search used only for sorted array
//    bool isIn = binary_search(a,a+10,114);
    cout<<binary_search(a,a+n,14)<<endl;

    return 0;
}
