#ifndef PESSOAS_H
#define PESSOAS_H

const int MAX_CARACTERES = 500;

typedef struct nome
{
    char nome[MAX_CARACTERES];
    char ultimoNome[MAX_CARACTERES];
}
nomeCompleto;

typedef struct CRM// CRM/RJ 213456
{
    char Estado[3];
    char nums[7];
}
CRM;

typedef struct COREN //COREN-SP 123.456-AE(Categoria)
{
    char Estado[3];
    char nums[7];
    char categoria[3];
}
COREN;

typedef struct endereco
{
    char numero[4];
    char logradouro[26];
    char bairro[26];
    char cidade[41];
    char estado[3];
}
Endereco;


typedef struct contato
{
    char telefone[10];
    Endereco endereco;
}
Contato;

typedef struct pessoa
{
    int idade;
    int sexo;
    nomeCompleto nome;
    Contato contato;
}
Pessoa;

typedef struct paciente
{
    Pessoa identidade;
    char historico[MAX_CARACTERES];
    char id[4];
}
paciente;

typedef struct medico
{
    Pessoa identidade;
    char especializacao[MAX_CARACTERES];
    CRM crm;
}
medico;

typedef struct enfermeiro
{
    Pessoa identidade;
    COREN coren;
}
enfermeiro;

typedef struct terceirizado
{
    Pessoa identidade;
    int idAtuacao;
}
terceirizado;

//Métodos entrada via teclado;
nomeCompleto geraNome();
Pessoa geraPessoa();
Endereco geraEndereco();
Contato geraContato();
paciente geraPaciente();
char* geraIDPaciente();//ID é composto de 3 dígitos em ordem aleatória, sendo 2 números distintos e 1 letra;
medico geraMedico();
CRM geraCRM();
enfermeiro geraEnfermeiro();
COREN geraCOREN();
terceirizado geraTerceirizado();

//Métodos a partir da leitura de .txt
nomeCompleto geraNomeArq(char* arquivo);
Pessoa geraPessoaArq(char* arquivo);
Endereco geraEnderecoArq(char* arquivo);
Contato geraContatoArq(char* arquivo);
paciente geraPacienteArq(char* arquivo);
char* geraIDPacienteArq(char* arquivo);
medico geraMedicoArq(char* arquivo);
CRM geraCRMArq(char* arquivo);
enfermeiro geraEnfermeiroArq(char* arquivo);
COREN geraCORENArq(char* arquivo);
terceirizado geraTerceirizadoArq(char* arquivo);


#endif