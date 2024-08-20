#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    for(int i = 0; i < k; i++){
        if(n % 10 == 0){
            n /= 10;
        }else{
            n--;
        }
    }
    if(k > 50){
        return 0;
    }
    printf("%d\n", n);
    return 0;
}