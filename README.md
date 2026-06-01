#  Battle Quiz Arena - Ultimate Edition

Projeto desenvolvido em C++ utilizando Qt Creator, Qt Widgets e conceitos de Programação Orientada a Objetos.

---

##  Descrição

Battle Quiz Arena é um RPG de texto e quiz em turnos com interface gráfica. O jogador escolhe uma classe de personagem (Guerreiro, Mago ou Arqueiro) e enfrenta o temível "Grão-Mestre do Silício".

Esta versão expandida conta com:
- **Sistema de Quiz Técnico:** Pergunta de POO e Eletrônica Básica.
- **Sistema de Inventário:** Itens consumíveis com herança e polimorfismo.
- **Persistência de Dados Dupla:** Gravação de Ranking local e exportação de logs de combate para arquivos `.txt`.
- **Eventos Aleatórios:** Modificadores de partida a cada turno (Fator RPG).
- **Sistema de Conquistas (Achievements):** Desbloqueio de medalhas por feitos na arena.
- **Customização Estética:** Alternância em tempo de execução entre os temas "Terminal Hacker" (Escuro) e "Laboratório" (Claro).

---

##  Objetivo

Aplicar conceitos fundamentais e avançados de Programação Orientada a Objetos utilizando uma aplicação gráfica interativa em C++.

---

##  Conceitos de POO Utilizados

- **Encapsulamento:** Atributos de personagens, itens e conquistas protegidos e expostos via métodos de acesso seguros.
- **Herança e Polimorfismo:** Aplicados nos Personagens (classes derivadas de `Character`) e nos Itens (classes derivadas de `Item`).
- **Agregação e Composição:** O herói agrega uma lista de ponteiros de `Item`, e a `MainWindow` compõe a lista de `Achievement`.
- **Persistência e Arquivos:** Fluxo de entrada e saída (I/O) de arquivos com `QFile` e `QTextStream` para persistência do ranking e geração de relatórios de partida (Logs).

---

##  Estrutura do Projeto

```text
battle-quiz-arena/
│
├── CMakeLists.txt              # Configuração do build do sistema
├── main.cpp                    # Ponto de entrada do programa
├── mainwindow.h                # Header da janela principal
├── mainwindow.cpp              # Lógica da interface gráfica e turnos
├── mainwindow.ui               # Arquivo de design visual (Qt Designer)
│
├── character.h                 # Classe base dos personagens (Herói e Chefão)
├── character.cpp
├── warrior.h                   # Classe derivada (Guerreiro)
├── warrior.cpp
├── mage.h                      # Classe derivada (Mago)
├── mage.cpp
├── archer.h                    # Classe derivada (Arqueiro)
├── archer.cpp
│
├── item.h                      # Classe base abstrata para itens do inventário
├── item.cpp
├── healthpotion.h              # Item derivado (Poção de Cura)
├── healthpotion.cpp
├── attackbuff.h                # Item derivado (Elixir de Overclock)
├── attackbuff.cpp
│
├── questionmanager.h           # Gerenciador do banco de dados do Quiz
├── questionmanager.cpp
│
├── docs/                       # Documentação do projeto
│   ├── analise.md              # Requisitos e especificações
│   ├── narrativa.md            # Banco de perguntas, alternativas, eventos e conquistas
│   ├── projeto.md              # Estrutura das classes e arquitetura
│   └── testes.md               # Casos de teste do sistema
│
└── README.md
