// Struct dentro de struct (sub-struct)
# include <stdio.h>

// Funçao para nao precisar reescrever toda a struct
typedef struct Date{
    int day;
    int month;
    int year;
}Date;

struct aluno_struct{
    int id;
    // Primeiro a struct (tipo), e depois o nome para chamar ela
    Date birth;
};

int main(){

    struct aluno_struct student;

    student.id = 01;
    student.birth.day = 15;
    student.birth.month = 12;
    student.birth.year = 1915;

    printf("Birthday = %d / %d / %d\n", student.birth.day, student.birth.month, student.birth.year);

    return 0;
}