int main(){
int i;
    int total = 0;
    scanf("%d", &i);

   do{
        total += i;
        scanf("%d", &i);

    }while(i != 0);
    printf("Resultado: %d", total);
    return 0;
}
