#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i=0;

    while (str[i]!='\0'){
        i++;
    }
    cout << i<<endl;

    char s1[10]={'H','A','s', 'H'};
    char s2[10] ={'G', 'O', 'A', 'L'};
    int j='0';
    i=0;
    j=0;
    while(s1[i]!='\0')
        i++;

    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    cout << "\n" <<s1<<endl;


    char a[25]="Harsh GOyal";
    i=0;
    while(a[i]!='\0'){
        i++;
    }
    for(int z=i; z>0; z--){
        cout<<a[z];
    }

    char cpy[25]="";
    for(int i=0; a[i]!='\0'; i++){
        cpy[i]=a[i];
    }
    cout << cpy;
    return 0;
}
