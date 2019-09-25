# include <stdio.h>
# include <stdlib.h>
# include <string.h>


struct contas{
    int id_cliente;
    int numero_do_documento;
    int dia_venc, mes_venc, ano_venc;
    int dia_pag, mes_pag, ano_pag;
    float valor;
    float juros;
};

void AlocaVetor(struct contas **vetor ,int tamanho){
    *vetor = (struct contas*) calloc(tamanho, sizeof(struct contas));
}

void InputContas(struct contas *vetor, int tamanho){
    float juros;
    printf("Input Contas! \n");
    for (int i = 0; i < tamanho; i++){
        vetor[i].id_cliente = i;
        printf("Cliente %d: \n", vetor[i].id_cliente);
        printf("Numero do Doc: ");
        scanf("%d", &vetor[i].numero_do_documento);

        printf("Data do Vencimento: ");
        scanf("%d/%d/%d", &vetor[i].dia_venc, &vetor[i].mes_venc, &vetor[i].ano_venc);

        printf("Valor a ser Pago: ");
        scanf("%f", &vetor[i].valor);

        printf("Data do Pagamento: ");
        scanf("%d/%d/%d", &vetor[i].dia_pag, &vetor[i].mes_pag, &vetor[i].ano_pag);

        if (vetor[i].ano_pag >= vetor[i].ano_venc){
            if (vetor[i].mes_pag >= vetor[i].mes_venc && vetor[i].dia_pag > vetor[i].dia_venc){
                juros = 0.0002 * vetor[i].valor;
                vetor[i].juros = juros*(vetor[i].dia_pag - vetor[i].dia_venc);
            }
        }
    }
}

void SearchContas(struct contas *vetor, int codigo, int tamanho){
    for (int i = 0; i < tamanho; i++){
        if (codigo == vetor[i].numero_do_documento){
            printf("--------------------------------------------------\n");
            printf("Id -> %d \n", vetor[i].id_cliente);
            printf("Doc -> %d \n", vetor[i].numero_do_documento);
            printf("Data Vencimento -> %d/%d/%d \n", vetor[i].dia_venc, vetor[i].mes_venc, vetor[i].ano_venc);
            printf("Data Pagamento -> %d/%d/%d \n", vetor[i].dia_pag, vetor[i].mes_pag, vetor[i].ano_pag);
            printf("Valor -> %2.f \n", vetor[i].valor);
            printf("Juros -> %2.f \n", vetor[i].juros);
            printf("Total -> %2.f \n", vetor[i].valor + vetor[i].juros);
            printf("--------------------------------------------------\n");
        }
    }
}

void PrintOverdueContas(struct contas *vetor, int tamanho){
    int contas_atrasadas = 0;
    for (int i = 0; i < tamanho; i++){
        if (vetor[i].ano_pag >= vetor[i].ano_venc){
            if (vetor[i].mes_pag >= vetor[i].mes_venc){
                if (vetor[i].dia_pag > vetor[i].dia_venc){
                    contas_atrasadas++;
                } 
            }
        }
    }

    if (contas_atrasadas == 0){
        printf("Sem contas atrasadas\n");
    }

    float soma_total = 0, soma_juros = 0;
    for (int i = 0; i < tamanho; i ++){
        if (vetor[i].ano_pag >= vetor[i].ano_venc){
            if (vetor[i].mes_pag >= vetor[i].mes_venc && vetor[i].dia_pag > vetor[i].dia_venc){
                printf("--------------------------------------------------\n");
                printf("Id -> %d \n", vetor[i].id_cliente);
                printf("Doc -> %d \n", vetor[i].numero_do_documento);
                printf("Data Vencimento -> %d/%d/%d \n", vetor[i].dia_venc, vetor[i].mes_venc, vetor[i].ano_venc);
                printf("Data Pagamento -> %d/%d/%d \n", vetor[i].dia_pag, vetor[i].mes_pag, vetor[i].ano_pag);
                printf("Valor -> %2.f \n", vetor[i].valor);
                printf("Juros -> %2.f \n", vetor[i].juros);
                printf("Total -> %2.f \n", vetor[i].valor + vetor[i].juros);
                printf("--------------------------------------------------\n");
                soma_total += (vetor[i].valor + vetor[i].juros);
                soma_juros += vetor[i].juros;
            }
        }
    }
    printf("----------------RELATORIO FINAL-------------------\n");
    printf("Contas -> %d \n", contas_atrasadas);
    printf("Total -> %.2f \n", soma_total);
    printf("Media Juros -> %.2f \n", (soma_juros/contas_atrasadas));
    printf("--------------------------------------------------\n");
}

void PrintPayments(struct contas *vetor, int tamanho){
    for (int i = 0; i < tamanho; i ++){
        printf("--------------------------------------------------\n");
        printf("Id -> %d \n", vetor[i].id_cliente);
        printf("Doc -> %d \n", vetor[i].numero_do_documento);
        printf("Data Vencimento -> %d/%d/%d \n", vetor[i].dia_venc, vetor[i].mes_venc, vetor[i].ano_venc);
        printf("Data Pagamento -> %d/%d/%d \n", vetor[i].dia_pag, vetor[i].mes_pag, vetor[i].ano_pag);
        printf("Valor -> %2.f \n", vetor[i].valor);
        printf("Juros -> %2.f \n", vetor[i].juros);
        printf("Total -> %2.f \n", vetor[i].valor + vetor[i].juros);
        printf("--------------------------------------------------\n");
    }
}

int GoodClient(struct contas *vetor, int codigo ,int tamanho){
    bool bom = true;
    for (int i = 0; i < tamanho && bom == true; i++){
        if (vetor[i].id_cliente == codigo){
            if (vetor[i].ano_pag >= vetor[i].ano_venc){
                if (vetor[i].mes_pag >= vetor[i].mes_venc && vetor[i].dia_pag > vetor[i].dia_venc){
                    bom = false;
                }
            }
        }
    }
    return bom;
}

void PrintStatusClients(struct contas *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Cliente: %d | Status -> %s \n", vetor[i].id_cliente, GoodClient(vetor, vetor[i].id_cliente, tamanho) ? "true" : "false");
    }
    printf("\n");
}

void DesalocaVetor(struct contas **vetor){
    if (*vetor != NULL){
        free(*vetor);
    }
    *vetor = NULL;
}

int Menu(){
    int option = 0;
    printf("1 - Alocar\n");
    printf("2 - Input Payments\n");
    printf("3 - Print Overdue Payments\n");
    printf("4 - Print all Payments\n");
    printf("5 - Print Status Clients\n");
    printf("6 - Search Payment\n");
    printf("7 - Desalocar\n");
    printf("8 - END\n");

    while (option < 1 || option > 8){
        scanf("%d",&option);
    }
    return option;
}

int main(){
    struct contas *payments=NULL;
    
    int quantia_usuarios = 0;
    int opcao, cod_for_search;

    opcao = Menu();
    while (opcao != 8){
        switch(opcao){
            case 1:
                printf("Insira o numero de contas: ");
                scanf("%d", &quantia_usuarios);
                if (payments != NULL)
                    DesalocaVetor(&payments);
                AlocaVetor(&payments, quantia_usuarios);
                if (payments == NULL) {
                   printf("Erro: Memoria insuficiente para a alocacao...\n");
                   exit(1);
                }
                break;
            
            case 2:
                if (payments != NULL)
                    InputContas(payments,quantia_usuarios);
                else
                    printf("Primeiro o vetor deve ser criado.\n");
                break;
        
            case 3:
                if (payments != NULL)
                    PrintOverdueContas(payments, quantia_usuarios);
                else
                    printf("Primeiro o vetor deve ser criado.\n");
                break;
                
            case 4:
                if (payments != NULL)
                    PrintPayments(payments,quantia_usuarios);
                else
                    printf("Primeiro o vetor deve ser criado.\n");
                break;
            
            case 5:
                if (payments != NULL)
                    PrintStatusClients(payments,quantia_usuarios);
                else
                    printf("Primeiro o vetor deve ser criado.\n");
                break;

            case 6:
                printf("Número do documento a ser buscado: ");
                scanf("%d", &cod_for_search);
                if (payments != NULL)
                    SearchContas(payments, cod_for_search, quantia_usuarios); 
                else 
                    printf("Primeiro o vetor deve ser criado.\n");
                break;
            
            case 7:
                DesalocaVetor(&payments);
                break;
        }

        opcao = Menu();
    }

    DesalocaVetor(&payments);
    return 0;
}
