# include <stdio.h >

int main() {

    char item[50] = "";
    float price = 0.0f; 
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What are you buying today?\n ");
    fgets( item, sizeof(item), stdin);

    printf("What is the price of each?\n "):
    scanf("%f", &price);

    printf("total quantity?\n ");
    scanf("%d", &quantity);

    return 0;
}