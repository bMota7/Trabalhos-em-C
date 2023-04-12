//Gerenciamento de login e senha com C

typedef struct  {
    char username[50];
    char password[50];
} User;

int validate_login(User *users, int num_users, char *username, char *password) {
    for (int i = 0; i < num_users; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            return 1; //login correto
        }
    }
    return 0; //login incorreto
}

int main(){
    User users[2];

    strcpy(users[0].username, "usuario1");
    strcpy(users[0].password, "senha1");
    strcpy(users[1].username, "usuario2");
    strcpy(users[1].password, "senha2");

    char username[50];
    char password[50];

    printf("Digite o nome de usuário: \n");
    scanf("%s", username);

    printf("Digite a senha: \n");
    scanf("%s", password);

    if (validate_login(users, 2, username, password)) {
        printf("Login correto. \n");
    } else {
        printf("Login incorreto. \n");
    }
    
    return 0;
}