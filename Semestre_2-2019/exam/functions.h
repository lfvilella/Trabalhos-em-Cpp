int Total_Mercado1(){
    float somador=0;
    size_t len= 100; // valor arbitrário
    char *linha; 

    int get_codigo;
    float get_valor;
    FILE *f;
    f = fopen("txt/mercado1.txt", "r");
    if (!f){
        perror("teste.txt");
        exit(1);
    }
    while (getline(&linha, &len, f) > 0){
        // printf("%s", linha);
        fscanf(f, "%d|%f", &get_codigo, &get_valor);
        somador+=get_valor;
    }
    // printf("%d|%.2f", get_codigo, get_valor);

    if (linha) free(linha);
    fclose(f);

    return somador;
}

int Total_Mercado2(){
    float somador=0;
    size_t len= 100; // valor arbitrário
    char *linha; 

    int get_codigo;
    float get_valor;
    FILE *f;
    f = fopen("txt/mercado2.txt", "r");
    if (!f){
        perror("teste.txt");
        exit(1);
    }
    while (getline(&linha, &len, f) > 0){
        // printf("%s", linha);
        fscanf(f, "%d|%f", &get_codigo, &get_valor);
        somador+=get_valor;
    }
    // printf("%d|%.2f", get_codigo, get_valor);

    if (linha) free(linha);
    fclose(f);

    return somador;
}

int Total_Mercado3(){
    float somador=0;
    size_t len= 100; // valor arbitrário
    char *linha; 

    int get_codigo;
    float get_valor;
    FILE *f;
    f = fopen("txt/mercado3.txt", "r");
    if (!f){
        perror("teste.txt");
        exit(1);
    }
    while (getline(&linha, &len, f) > 0){
        // printf("%s", linha);
        fscanf(f, "%d|%f", &get_codigo, &get_valor);
        somador+=get_valor;
    }
    // printf("%d|%.2f", get_codigo, get_valor);

    if (linha) free(linha);
    fclose(f);

    return somador;
}