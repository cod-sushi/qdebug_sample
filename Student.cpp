#include "Student.h"
#include <QDebugStateSaver>

QDebug operator<<(QDebug dbg, const Student &c)
{
  // QDebugの状態を保存。
  // QDebugStateSaverインスタンス破棄時に状態が復元される
  QDebugStateSaver saver(dbg);

  // 自動でスペースを出力しないよう設定
  dbg.nospace();

  // Studentクラスのデータを出力
  dbg << "Student(";
  dbg << "name: " << c.name_ << ", ";
  dbg << "age: " << c.age_ << ", ";
  dbg << "japanese: " << c.japanese_ << ", ";
  dbg << "math: " << c.math_;
  dbg << ")";

  return dbg;
}
