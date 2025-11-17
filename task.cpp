#include "task.h"

QJsonObject Task::toJson()
{
    QJsonObject obj;
    obj["title"] = _title;
    obj["content"] = _content;
    obj["impact"] = _impact;
    obj["urgency"] = _urgency;
    obj["relevance"] = _relevance;
    obj["effort"] = _effort;

    return obj;
}
