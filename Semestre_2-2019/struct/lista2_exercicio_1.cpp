# include <stdio.h>
# include <string.h>
# include <iostream>

using namespace std;

typedef struct disciplina_aluno{
    char codigo_disciplina_aluno[25];
    char nome_da_disciplina_aluno[100];
}disciplina_aluno;

struct lista_cadastro{
    char codigo[30];
    char nome[500];
    int idade;
    int sexo;
    float nota_enem;
    disciplina_aluno aulas;
};

struct disciplinas{
    char codigo_disciplina[25];
    char nome_da_disciplina[100];
};


int main(){
    int sexo_masculino = 0, sexo_feminino = 0;
    float media_idade = 0, media_idade_nota_enem;
    int quantia_nota_enem_maior_7_5 = 0;

    int numero_de_alunos;
    scanf("%d", &numero_de_alunos);

    struct lista_cadastro aluno[numero_de_alunos];
    int i;

    for (i = 0; i < numero_de_alunos; i++){
        cin >> aluno[i].codigo;
        cin >> aluno[i].nome;
        cin >> aluno[i].idade;
        media_idade += aluno[i].idade;
        cin >> aluno[i].sexo;
        if (aluno[i].sexo == 1){
            sexo_masculino++;
        }
        if (aluno[i].sexo == 0){
            sexo_feminino++;
        }
        cin >> aluno[i].nota_enem;
        if (aluno[i].nota_enem >= 7.5){
            media_idade_nota_enem += aluno[i].idade;
            quantia_nota_enem_maior_7_5++;
        }
    }
    media_idade = (media_idade/numero_de_alunos);
    media_idade_nota_enem = (media_idade_nota_enem/quantia_nota_enem_maior_7_5);

    int numero_de_disciplinas;
    scanf("%d", &numero_de_disciplinas);
    struct disciplinas materias[numero_de_disciplinas];

    for (i = 0; i < numero_de_disciplinas; i++){
        cin >> materias[i].codigo_disciplina;
        cin >> materias[i].nome_da_disciplina;
    }

    int sequencia_de_matriculas;
    scanf("%d", &sequencia_de_matriculas);
    char codigo_para_busca[30];
    char codigo_disciplina_para_busca[25];

    for (i = 0; i < sequencia_de_matriculas; i++){
        cin >> codigo_para_busca >> codigo_disciplina_para_busca;
        for (int j = 0; j < numero_de_alunos; j++){
            if (codigo_para_busca == aluno[j].codigo){
                for (int k = 0; k < numero_de_disciplinas; k++){
                    if (codigo_disciplina_para_busca == materias[k].codigo_disciplina){
                        strcpy(aluno[j].aulas.codigo_disciplina_aluno, codigo_disciplina_para_busca);
                        strcpy(aluno[j].aulas.nome_da_disciplina_aluno, materias[k].nome_da_disciplina);
                    }
                }
            }
        }
    }

    printf("Sexo Masculino: %d\n", sexo_masculino);
    printf("Sexo Feminino: %d\n", sexo_feminino);
    printf("Media Idades: %2.f\n", media_idade);
    printf("Media Idades Nota Maior que 7.5: %2.f\n", media_idade_nota_enem);

    for (i = 0; i < numero_de_alunos; i++){
        cout << aluno[i].codigo << "\n";
        cout << aluno[i].aulas.codigo_disciplina_aluno << "\n";
    }

    return 0;
}