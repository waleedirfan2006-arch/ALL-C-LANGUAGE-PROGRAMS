#include <stdio.h>
int main() {
    int n, num, d, s;
    for (n=1; n<=500; n++) {
        num=n; s=0;
        while(num>0){ d=num%10; s+=d*d*d; num/=10; }
        if(s==n) printf("%d ", n);
    }
}
