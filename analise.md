# Análise de Funcionalidades do Sistema

##  Objetivo do Jogo

Desenvolver um jogo de batalha em turnos utilizando C++, Qt Creator e conceitos de Programação Orientada a Objetos. O jogador responderá perguntas técnicas para enfrentar um Chefão, gerenciará itens consumíveis e terá seu recorde salvo em um ranking local.

---

##  Funcionalidades Implementadas no Jogo

- **Escolha de Personagem:** O usuário seleciona obrigatoriamente uma classe entre Guerreiro, Mago ou Arqueiro na tela inicial antes de iniciar o combate.
- **Sistema de Quiz Técnico:** Exibição em tela de perguntas de múltipla escolha focadas em POO e Eletrônica Básica, contendo 4 alternativas cada.
- **Mecânica de Turno e Combate:** O jogador ataca o Chefão se responder corretamente à pergunta do turno. Caso selecione a resposta errada, ele perde a chance de ataque e sofre um contra-ataque automático do inimigo.
- **Gerenciamento de Inventário:** O personagem do jogador inicia a partida carregando uma quantidade limitada de itens consumíveis.
- **Uso Estratégico de Itens:** Durante o seu turno, o jogador pode optar por consumir um item (recuperar vida ou aumentar dano) sacrificando a oportunidade de responder à pergunta daquela rodada.
- **Gravação de Ranking Local:** Ao derrotar o Chefão, o jogo solicita o nome do usuário e salva permanentemente a pontuação e os turnos em um arquivo local chamado `ranking.txt`.
- **Leitura e Exibição de Histórico:** Toda vez que o programa é aberto, ele faz a leitura automática do arquivo de ranking e lista as maiores pontuações em uma tabela organizada dentro de uma aba.
- **Monitoramento de Vida em Tempo Real:** A interface atualiza e exibe a integridade do herói e do Chefão continuamente através de barras de progresso visuais.
- **Gatilho de Eventos Aleatórios:** Modificadores imprevisíveis de cenário que surgem no início de turnos específicos, alterando dinamicamente as regras (como aplicar dano crítico duplo ou indisponibilizar itens por sobrecarga).
- **Desbloqueio de Conquistas:** O sistema monitora as ações em segundo plano e concede medalhas ao jogador na tela caso ele atinja feitos específicos (como vencer sem se curar ou acertar várias perguntas seguidas).
- **Exportação do Relatório de Combate:** Opção para o usuário salvar todo o histórico de interações, erros e acertos daquela rodada específica em um documento de texto externo (`log_partida.txt`).
- **Alternância de Temas de Interface:** Opção visual na tela para chavear instantaneamente a estética gráfica do jogo entre o Modo Terminal Escuro e o Modo Laboratório Claro.

---

##  Diretrizes Técnicas de Desenvolvimento

- **Linguagem Utilizada:** Escrito e estruturado de forma nativa e pura em C++.
- **Construção Gráfica:** Desenvolvido em ambiente desktop utilizando a biblioteca visual Qt Widgets (`QTabWidget`, `QProgressBar`, `QTextEdit`).
- **Persistência de Arquivos:** Manipulação direta de gravação e leitura em disco feita através das classes integradas `QFile` e `QTextStream`.
- **Arquitetura Orientada a Objetos:** Obrigatoriedade no uso de pilares de encapsulamento de atributos, relacionamento por herança, execução de polimorfismo e agregação estruturada de componentes.
