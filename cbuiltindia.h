#ifndef CBUILTINDIA_H
#define CBUILTINDIA_H

#include <QDialog>
#include<QPushButton>
#include<QTextEdit>

class CBuiltinDia : public QDialog
{
    Q_OBJECT

public:
    CBuiltinDia(QWidget *parent = nullptr);
    ~CBuiltinDia();

private:
    QTextEdit   *displayTextEdit;
    QPushButton *colorPushBtn;
    QPushButton *errorPushBtn;
    QPushButton *filePushBtn;
    QPushButton *fontPushBtn;
    QPushButton *inputPushBtn;
    QPushButton *pagePushBtn;
    QPushButton *progressPushBtn;
    QPushButton *printPushBtn;
private slots:
    //void doPushBtn
};
#endif // CBUILTINDIA_H
