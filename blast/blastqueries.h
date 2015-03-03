#ifndef BLASTQUERIES_H
#define BLASTQUERIES_H

#include <vector>
#include "blastquery.h"
#include <QFile>


class BlastQueries
{
public:
    BlastQueries();
    ~BlastQueries();

    std::vector<BlastQuery> m_queries;

    BlastQuery * getQueryFromName(QString queryName);

    void addQuery(BlastQuery newQuery);
    void clearQueries();

private:
    QFile m_tempFile;

    void createTempFile();
    void deleteTempFile();
    void updateTempFile();
    bool tempFileExists() {return m_tempFile.exists();}
    bool tempFileDoesNotExist() {return !tempFileExists();}

};

#endif // BLASTQUERIES_H
