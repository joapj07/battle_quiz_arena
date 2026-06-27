#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H

#include <QString>
#include <QStringList>
#include <QVector>

struct Question {
    QString statement;
    QStringList options;
    int correctOptionIndex;
    QString insultIfWrong;
};

class QuestionManager {
private:
    QVector<Question> questions;
    QVector<Question> usedQuestions;

public:
    QuestionManager();

    // Sorteia uma pergunta que ainda não foi usada na partida
    Question getRandomQuestion();

    // Reseta o banco de perguntas caso o jogo reinicie
    void resetQuestions();

    // Retorna a quantidade de perguntas restantes
    int getRemainingCount() const;
};

#endif // QUESTIONMANAGER_H