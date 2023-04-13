#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

long long n, i;
char r;

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout<<"Insira um número natural: ";
    cin>>n;

    while(0 < n && n != 1){
        if(n % 2 == 0){
            n = n / 2;
            i++;
            cout<<n<<endl;
        }
        else{
            n = 3 * n + 1;
            i++;
            cout<<n<<endl;
        }
    }

    cout<<"Iterações: "<<i<<endl;

    cout<<"\nTentar novamente?(s/n) ";
    cin>>r;

    if(r == 's'){
        i=0;
        main();
    }
    else{
        return 0;
    }
}
