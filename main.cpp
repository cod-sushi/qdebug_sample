#include <QCoreApplication>

#include "Student.h"
#include <QDebug>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  Student student;

  // Student(name: "", age: 0, japanese: 0, math: 0)
  qDebug() << student;

  return a.exec();
}
