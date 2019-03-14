#ifndef TOOLS_H
#define TOOLS_H

#include <QWidget>
#include "abstracttab.h"
#include "conducti/qconducti.h"

namespace Ui {
  class Tools;
}

class Tools : public AbstractTab
{
  Q_OBJECT

public:
  explicit Tools(QWidget *parent = 0);
  ~Tools();

protected:
  virtual void updateStatus(View* view);

private slots:
  void on_toolButton_clicked();

private:
  Ui::Tools *ui;
  QConducti _conducti;
};

#endif // TOOLS_H
