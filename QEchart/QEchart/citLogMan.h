#ifndef CIT_LOGMAN_H_
#define CIT_LOGMAN_H_

#include <QTextStream>
#include <QDateTime>
#include <QFile>

void citOutputMessage(QtMsgType type, const QMessageLogContext &context, const QString &msg);

static void citDebug(const QString &msg);

static int s_printLogInfo = 1;

#endif //CIT_LOGMAN_H_

