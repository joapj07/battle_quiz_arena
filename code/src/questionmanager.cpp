#include "questionmanager.h"
#include <cstdlib>

QuestionManager::QuestionManager() {
    resetQuestions();
}

void QuestionManager::resetQuestions() {
    questions.clear();
    usedQuestions.clear();

    // ---- BLOCO 1: POO ----
    questions.append({
        "Qual pilar da POO eh responsável por esconder os detalhes internos de um objeto e expor apenas o necessário?",
        {"Herança", "Polimorfismo", "Encapsulamento", "Abstração"},
        2,
        "Haha! Seus atributos estão totalmente expostos! Falta de private!"
    });

    questions.append({
        "O que acontece quando declaramos um método como 'virtual puro' (com = 0) em C++?",
        {"O método eh deletado.", "A classe se torna Abstrata e nao pode ser instanciada.", "O método so roda uma vez.", "O programa compila mais rápido."},
        1,
        "Você tentou instanciar o impossível! Sua lógica eh abstrata igual sua chance de passar!"
    });

    questions.append({
        "Na herança em C++, qual modificador permite que as classes filhas acessem os membros da mãe, mas impede o acesso externo?",
        {"public", "private", "protected", "friend"},
        2,
        "Acesso negado! Nem suas classes filhas confiam em você. Estranho no escopo!"
    });

    // ---- BLOCO 2: ELETRÔNICA ----
    questions.append({
        "De acordo com a Lei de Ohm, se você mantiver a resistência constante e duplicar a tensão, o que acontece com a corrente?",
        {"A corrente cai pela metade.", "A corrente também duplica.", "A corrente zera.", "A corrente explode o circuito."},
        1,
        "Incrível! Você conseguiu queimar o circuito antes mesmo de ligar a fonte!"
    });

    questions.append({
        "Qual componente eletrônico básico eh conhecido por armazenar energia em um campo elétrico e descarregá-la rapidamente?",
        {"Resistor", "Diodo", "Capacitor", "Transistor"},
        2,
        "Sua mente está sem capacitância nenhuma... Não retém um bit!"
    });
}

Question QuestionManager::getRandomQuestion() {
    if (questions.isEmpty()) {
        // Se acabarem as perguntas, reinicia o banco para não quebrar o jogo
        resetQuestions();
    }

    int index = std::rand() % questions.size();
    Question q = questions.takeAt(index); // Remove da lista para não repetir
    usedQuestions.append(q);
    return q;
}

int QuestionManager::getRemainingCount() const {
    return questions.size();
}