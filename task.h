#ifndef TASK_H
#define TASK_H

#include <QString>
#include <QJsonObject>
#include <QUuid>

class Task
{
public:
    Task(const QString &title = "", const QString &content = "", bool done = false,
         int impact = 0, int urgency = 0, int relevance = 0, int effort = 0)
        : _uuid(QUuid::createUuid()), _title(title), _content(content), _isDone(done),
          _impact(impact), _urgency(urgency), _relevance(relevance), _effort(effort) {}

    QJsonObject toJson();

    QUuid uuid() const
    {
        return _uuid;
    }

    QString title() const
    {
        return _title;
    };

    void setTitle(const QString &t)
    {
        _title = t;
    }

    QString content() const
    {
        return _content;
    }

    void setContent(const QString &c)
    {
        _content = c;
    }

    bool isDone() const
    {
        return _isDone;
    }

    void setIsDone(bool done)
    {
        _isDone = done;
    }

    int impact() const
    {
        return _impact;
    }

    void setImpact(int impact)
    {
        _impact = impact;
    }

    int urgency() const
    {
        return _urgency;
    }

    void setUrgency(int urgency)
    {
        _urgency = urgency;
    }

    int relevance() const
    {
        return _relevance;
    }

    void setRelevance(int relevance)
    {
        _relevance = relevance;
    }

    int effort() const
    {
        return _effort;
    }

    void setEffort(int effort)
    {
        _effort = effort;
    }

private:
    QUuid _uuid;
    QString _title;
    QString _content;
    bool _isDone;

    int _impact;
    int _urgency;
    int _relevance;
    int _effort;
};

#endif // TASK_H
