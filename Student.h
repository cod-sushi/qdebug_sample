#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student
{
private:
  QString name_;
  int age_;
  int japanese_;
  int math_;

public:
  Student():name_(""), age_(0), japanese_(0), math_(0){}

  // QDebug用定義。Studentのメンバ関数ではない。
  // friend関数にすることで、Studentクラスのprivateメンバにアクセスできる。
  friend QDebug operator<<(QDebug dbg, const Student &student);
};

#endif // STUDENT_H
