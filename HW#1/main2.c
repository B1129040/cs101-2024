include <stdio.h>

int main()
{
    char a[] ="A4B1C3f3";
    int n = sizeof(a)-1;
    char word;
    int num;
    for (int i=0;i<n;i++){
        if (i%2){
            num = a[i]-48;
            for(int j=0;j<num;j++)
            printf("%c",word);
        }else{
            word = a[i];
        }
    }
    return 0;
}
