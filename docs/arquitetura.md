# Arquitetura e Modelagem UML

## Visão Geral

O projeto **Battle Quiz Arena** foi desenvolvido utilizando os conceitos de Programação Orientada a Objetos (POO) e modelado através da Linguagem Unificada de Modelagem (UML).

O sistema consiste em um jogo de perguntas e respostas com elementos de RPG, onde o jogador escolhe uma classe de personagem e enfrenta o chefe final denominado **Grão-Mestre do Silício**.

A UML foi utilizada para representar a estrutura do sistema antes da implementação, facilitando o planejamento e a organização do código.

---

# Diagrama de Classes

O diagrama de classes representa a estrutura interna do sistema.

Cada classe é dividida em três partes:

## 1. Nome da Classe

A primeira seção identifica a classe.

Exemplo:

```text
Character
```

Corresponde à declaração da classe em C++:

```cpp
class Character
{
};
```

---

## 2. Atributos

A segunda seção representa os dados armazenados pela classe.

Exemplo:

```text
# name : QString
# hp : int
# maxHp : int
# currentAttackPower : int
```

Correspondente ao código:

```cpp
protected:
    QString name;
    int hp;
    int maxHp;
    int currentAttackPower;
```

### Modificadores de Acesso

Os símbolos utilizados no diagrama UML indicam o nível de acesso dos atributos e métodos.

| Símbolo | Significado | Equivalente em C++ |
| ------- | ----------- | ------------------ |
| +       | Público     | public             |
| -       | Privado     | private            |
| #       | Protegido   | protected          |

Exemplos:

```text
+ getHp() : int
```

Método público.

```text
- score : int
```

Atributo privado.

```text
# hp : int
```

Atributo protegido.

---

## 3. Métodos

A terceira seção representa as operações que a classe pode executar.

Exemplo:

```text
+ attack(Character*) : QString
+ getHp() : int
+ setHp(int)
```

Correspondente ao código:

```cpp
QString attack(Character*);
int getHp();
void setHp(int);
```

### Tipo de Retorno

O valor após os dois pontos indica o tipo retornado pelo método.

Exemplo:

```text
+ getHp() : int
```

Retorna um valor inteiro.

---

# Classes Abstratas

Uma classe abstrata representa um conceito genérico do sistema.

Ela não pode ser instanciada diretamente.

No UML é identificada pelo estereótipo:

```text
<<abstract>>
```

No projeto existem duas classes abstratas:

## Character

Classe base para:

* Warrior
* Mage
* Archer
* Boss

## Item

Classe base para:

* HealthPotion
* AttackBuff

Exemplo de método virtual puro:

```cpp
virtual QString attack(Character* target) = 0;
```

---

# Herança

A herança permite reutilizar atributos e métodos de uma classe base.

No UML ela é representada por uma linha contínua terminando em um triângulo vazio.

Exemplo:

```text
Warrior
   ▲
   |
Character
```

No código:

```cpp
class Warrior : public Character
```

No projeto:

* Warrior herda de Character
* Mage herda de Character
* Archer herda de Character
* Boss herda de Character
* HealthPotion herda de Item
* AttackBuff herda de Item

---

# Polimorfismo

O polimorfismo permite que diferentes classes implementem um mesmo método de maneiras distintas.

Exemplo:

```cpp
virtual QString attack(Character* target) = 0;
```

Cada personagem possui sua própria implementação do método attack().

Da mesma forma:

```cpp
virtual void applyEffect(Character* target) = 0;
```

É implementado de maneira diferente por:

* HealthPotion
* AttackBuff

---

# Encapsulamento

O encapsulamento protege os dados internos das classes.

Os atributos não são acessados diretamente, mas através de métodos públicos.

Exemplos:

```cpp
getHp()
getName()
getCurrentAttackPower()
```

Benefícios:

* Maior segurança dos dados.
* Controle sobre alterações de estado.
* Melhor organização do código.

---

# Diagrama de Casos de Uso

O diagrama de casos de uso representa as funcionalidades disponíveis para os usuários do sistema.

O ator principal do projeto é:

```text
Jogador
```

---

# Ator

Representa uma entidade externa que interage com o sistema.

No projeto:

```text
Jogador
```

---

# Casos de Uso

Representam funcionalidades oferecidas pelo sistema.

Exemplos:

* Selecionar Personagem
* Iniciar Partida
* Responder Pergunta
* Utilizar Item
* Visualizar Ranking
* Encerrar Partida

---

# Relacionamento <<include>>

Representa uma funcionalidade obrigatória.

Sempre que um caso de uso é executado, o caso de uso incluído também será executado.

Exemplo:

```text
Responder Pergunta
        |
    <<include>>
        |
Validar Resposta
```

Toda resposta fornecida pelo jogador deve obrigatoriamente ser validada.

---

# Relacionamento <<extend>>

Representa um comportamento opcional ou condicional.

Ocorre apenas em determinadas situações.

Exemplo:

```text
Atacar Inimigo
        |
    <<extend>>
        |
Validar Resposta
```

O ataque só ocorre quando a resposta for validada como correta.

---

# Benefícios da UML no Projeto

A utilização da UML permitiu:

* Planejar a arquitetura do sistema antes da implementação.
* Organizar responsabilidades entre as classes.
* Aplicar corretamente os conceitos de Programação Orientada a Objetos.
* Facilitar futuras manutenções.
* Melhorar a documentação do projeto.
* Tornar o desenvolvimento mais estruturado e compreensível.

```
```
