#ifndef QUICKWIDGET_H
#define QUICKWIDGET_H

#include <QUrl>
#include <QQuickWidget>
#include "child.h"

class Form;
class Pane;

// ---------------------------------------------------------------------
class QuickWidget : public Child
{
  Q_OBJECT

public:
  QuickWidget(string n, string s, Form *f, Pane *p);
  string get(string p,string v);
  void set(string p,string v);
  string state();

  QUrl sourceUrl;
  int resizeMode;

private slots:

  void statusChanged(QQuickWidget::Status status);
  void sceneGraphError(QQuickWindow::SceneGraphError, const QString &message);

};

#endif
