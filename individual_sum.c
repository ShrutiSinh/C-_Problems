#include <stdio.h>
int main(){
    int n,hundreds,tens,ones;
    printf("Enter any 3 digit no:- ");
    scanf("%d",&n);
    hundreds = (n/100);
    tens=(n%100)/10;
    ones =(n%10);
    printf("sum of individual no.s of a 3 digit no. is %d",hundreds+tens+ones);
    return 0;

}
