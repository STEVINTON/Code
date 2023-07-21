#include <stdio.h>

char ones[10][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};
char tens1[10][10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char tens2[8][10]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

void main(){
    int num;
    while(1){
    scanf("%d",&num);
    if(num>=0 && num<=9){
        printf("%s",ones[num]);
    }
    else if(num == 1000){
        printf("thousnand");
    }
    else if(num == 100){
        printf("hundred");
    }
    else if(num>=10 && num<=19){
        printf("%s",tens1[num%10]);
    }
    else if(num>=20 && num<=99){
        if((num/10)!=0 &&(num%10)==0){
            printf("%s",tens2[(num/10)-2]);
        }
        else{
            printf("%s %s",tens2[(num/10)-2],ones[num%10]);
        }
    }
    else if(num>100 && num<=999){
        int one=num%10,temp=num;
        temp/=10;
        int hun=temp/10;
        int ten=temp%10;
        if(one!=0){
            printf("%s hundred and %s %s",ones[hun],tens2[ten-2],ones[one]);
        }
        else if(ten==0 && one == 0){
             printf("%s hundred %s",ones[hun],tens2[ten-2]);
        }
        else{
            printf("%s hundred and %s",ones[hun],tens2[ten-2]);
            }
        }
    }

}

