#include <stdio.h>

int main() {
    int T;
    int L, R;
    long long sum = 0; 

    scanf("%d", &T);

    for (int t = 0; t < T; ++t) {


        scanf("%d %d", &L, &R);
 
        for (int i = L; i <= R; ++i) {
            sum += i;
        }
        printf("%lld\n",sum);
    }

    return 0;
}
