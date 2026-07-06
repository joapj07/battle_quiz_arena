# Battle Quiz Arena

Projeto desenvolvido em **C++** utilizando **Qt Creator**, **Qt Widgets** e os principais conceitos de **Programação Orientada a Objetos (POO)**.

---

# Descrição

Battle Quiz Arena é um jogo de perguntas e respostas com elementos de RPG desenvolvido como projeto da disciplina de Programação Orientada a Objetos.

O jogador escolhe uma classe de personagem (**Guerreiro, Mago ou Arqueiro**) para enfrentar o chefe final **Grão-Mestre do Silício**. Durante a batalha, perguntas são apresentadas ao jogador e, de acordo com a resposta, ataques, penalidades ou efeitos de itens são aplicados.

O projeto foi desenvolvido utilizando interface gráfica com **Qt Widgets**, aplicando conceitos fundamentais de orientação a objetos e boas práticas de organização de software.

---

# Objetivos

- Aplicar os principais conceitos de Programação Orientada a Objetos.
- Desenvolver uma aplicação gráfica utilizando Qt Creator.
- Implementar herança, encapsulamento, polimorfismo e abstração.
- Modelar o sistema utilizando diagramas UML.
- Organizar o projeto seguindo boas práticas de desenvolvimento.

---

# Funcionalidades

- Seleção de personagem.
- Classes disponíveis:
  - Guerreiro (Warrior)
  - Mago (Mage)
  - Arqueiro (Archer)
- Sistema de perguntas e respostas.
- Sistema de combate contra o chefe.
- Sistema de itens consumíveis.
- Poção de Vida (HealthPotion).
- Bônus de Ataque (AttackBuff).
- Controle de vida dos personagens.
- Gerenciamento de perguntas através da classe `QuestionManager`.
- Interface gráfica desenvolvida com Qt Widgets.

---

# Conceitos de Programação Orientada a Objetos

## Encapsulamento

Os atributos das classes permanecem protegidos e são acessados por meio de métodos públicos (getters e setters), garantindo maior segurança e controle sobre os dados.

Exemplos:

- `getHp()`
- `getName()`
- `getCurrentAttackPower()`

---

## Herança

A classe abstrata `Character` serve como base para:

- Warrior
- Mage
- Archer
- Boss

A classe abstrata `Item` serve como base para:

- HealthPotion
- AttackBuff

---

## Polimorfismo

Cada personagem implementa seu próprio comportamento para o método:

- `attack()`

Cada item implementa seu próprio comportamento para:

- `applyEffect()`

---

## Abstração

As classes `Character` e `Item` foram implementadas como classes abstratas, permitindo representar comportamentos genéricos que são especializados pelas classes derivadas.

---

# Estrutura das Classes

### Personagens

- Character *(Classe Abstrata)*
  - Warrior
  - Mage
  - Archer
  - Boss

### Itens

- Item *(Classe Abstrata)*
  - HealthPotion
  - AttackBuff

### Controle do Sistema

- MainWindow
- QuestionManager
- Question *(struct)*

---

# Documentação

A documentação do projeto está disponível na raiz do repositório.

Arquivos disponíveis:

- README.md
- analise.md
- arquitetura.md
- casos_de_uso.md
- implementacao.md
- narrativa.md
- projeto.md
- testes.md

---

# Diagramas UML

Os diagramas do projeto encontram-se na pasta **img/**.

Diagramas disponíveis:

- Diagrama de Casos de Uso
- Diagrama de Classes

---

# Organização do Projeto

```text
battle_quiz_arena/
│
├── code/
│   ├── include/
│   │   ├── character.h
│   │   ├── warrior.h
│   │   ├── mage.h
│   │   ├── archer.h
│   │   ├── boss.h
│   │   ├── item.h
│   │   ├── healthpotion.h
│   │   ├── attackbuff.h
│   │   ├── questionmanager.h
│   │   └── mainwindow.h
│   │
│   ├── src/
│   │   ├── character.cpp
│   │   ├── warrior.cpp
│   │   ├── mage.cpp
│   │   ├── archer.cpp
│   │   ├── boss.cpp
│   │   ├── item.cpp
│   │   ├── healthpotion.cpp
│   │   ├── attackbuff.cpp
│   │   ├── questionmanager.cpp
│   │   ├── mainwindow.cpp
│   │   └── main.cpp
│   │
│   └── CMakeLists.txt
│
├── docs/
│   ├── img/
│   │   ├── diagrama_classes.png
│   │   └── diagrama_casos_de_uso.png
│   │
│   ├── analise.md
│   ├── arquitetura.md
│   ├── casos_de_uso.md
│   ├── implementacao.md
│   ├── narrativa.md
│   ├── projeto.md
│   └── testes.md
│
├── .gitignore
└── README.md
```

---

# Ferramentas Utilizadas

- C++
- Qt Creator
- Qt Widgets
- CMake
- Git
- GitHub

---

# Autor

**João Carlos Padoveze Junior**

Projeto desenvolvido para a disciplina de **Programação Orientada a Objetos**.
