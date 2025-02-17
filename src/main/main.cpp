//
// Created by thiba on 17/02/2025.
//


#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QPushButton button("Hello, Qt!");
    button.show();

    return QApplication::exec();
}
