/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "pingpong.h"
#include <stdlib.h>
#include <stdio.h>
#include <ucontext.h>

#define STACKSIZE 32768 /*Tamanho da pilha de threads*/

task_t tarefa_principal, *tarefa_atual;
int count = 0;

// funções gerais ==============================================================

// Inicializa o sistema operacional; deve ser chamada no inicio do main()

void pingpong_init() {
        //desativa o buffer de saida padrao (stdout), usado pela função printf
    setvbuf(stdout, 0, _IONBF, 0);
    tarefa_principal.id = count++; //ID da tarefa
    tarefa_principal.parent = NULL; //A primeira tarefa nunca possuirá pai
    tarefa_principal.status = EXECUTANDO; //..assim que ela é criada, já entra em execução
    tarefa_atual = &tarefa_principal; //..como ela é a tarefa em execução no momento, o vetor tarefa_atual começa apontando pra ela

}

// gerência de tarefas =========================================================

// Cria uma nova tarefa. Retorna um ID> 0 ou erro.

int task_create(task_t *task /*descritor da nova tarefa*/, void (*start_func)(void *) /* funcao corpo da tarefa*/, void *arg /*argumentos para a tarefa*/) {

}

// Termina a tarefa corrente, indicando um valor de status encerramento

void task_exit(int exitCode) {

}

// alterna a execução para a tarefa indicada

int task_switch(task_t *task) {

}

// retorna o identificador da tarefa corrente (main eh 0)

int task_id() {
    return tarefa_atual->id;
}

