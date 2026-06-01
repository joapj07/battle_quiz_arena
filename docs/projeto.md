# Projeto e Arquitetura

##  Estrutura do Sistema

O sistema é modularizado e utiliza herança e polimorfismo duplo (tanto para os personagens de combate quanto para os itens do inventário), garantindo uma estrutura escalável e limpa.

---

##  Detalhamento das Classes

### Character
Classe base abstrata do sistema. É utilizada tanto para estruturar as classes dos Heróis quanto para o **reaproveitamento de código na criação do Chefão**, evitando a duplicação de lógica.
- **Atributos:** Nome, HP (atual e máximo), Poder de Ataque e uma lista agregada de itens (`QList<Item*>`).

### Warrior, Mage e Archer
Classes derivadas de `Character`. Cada uma sobrescreve o método virtual de ataque para aplicar multiplicadores de dano específicos e mensagens personalizadas no log de batalha.

### Item (Classe Abstrata)
Classe base para todos os itens consumíveis que o jogador carrega.
- **Atributos:** `QString name`, `QString description`.
- **Método Virtual Puro:** `virtual void applyEffect(Character* target) = 0;`

### HealthPotion (Herda de Item)
Implementa o efeito de cura, restaurando uma quantidade fixa de vida (+50 HP) no personagem do jogador.

### AttackBuff (Herda de Item)
Implementa o efeito de Overclock, aumentando o poder de ataque do herói para o turno seguinte.

### QuestionManager
Classe responsável por estruturar o banco de dados do Quiz. Encapsula um vetor de estruturas do tipo `Question` e expõe métodos para carregar, sortear e validar as respostas clicadas.

### MainWindow
A classe da interface gráfica que gerencia os turnos. Ela associa os objetos, atualiza os componentes visuais, lê e escreve nos arquivos físicos `ranking.txt` e `log_partida.txt` para manter a persistência de dados.

---

##  Arquitetura dos Novos Complementos

### Estrutura de Conquistas (Achievements)
Será modelada como uma `struct` interna na `MainWindow`:
```cpp
struct Achievement {
    QString title;
    QString description;
    bool isUnlocked;
};
