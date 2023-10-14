#ifndef BANCODEDADOS_HPP
#define BANCODEDADOS_HPP
#include "Tarefa.hpp"

#include <iostream>
#include <vector>

using namespace std;

class BancoDeDados
{
private:
  vector<Tarefa> tarefas;

public:
//metodos do banco de dados
  static void recuperarTarefas(vector<Tarefa> &tarefas);
  static void salvarTarefas(Tarefa &tarefa);
  static void salvarTarefasConcluidas(vector<Tarefa> &tarefas);
};

#endif
