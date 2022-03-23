int main(){
// soma numeros até ser inserido um 0
    int i;
    int total = 0;
    scanf("%d", &i);

    while(i != 0){
        total += i;
        scanf("%d", &i);

    }
    printf("Resultado: %d", total);
    return 0;
    }
