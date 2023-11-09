


#include <stdio.h>
#include <string.h>

int main() {
   
    char A[100], B[100];


    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = '\0'; 


    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = '\0'; 

  
    int size_A = strlen(A);
    int size_B = strlen(B);


    printf("%d %d\n", size_A, size_B);

    strcat(A, B);
    printf("%s\n", A);

    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s\n", A, B);

    return 0;
}
