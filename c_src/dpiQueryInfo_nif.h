#ifndef _DPIQUERYINFO_NIF_H_
#define _DPIQUERYINFO_NIF_H_

#include "dpi_nif.h"
#include "dpi.h"

#define DPI_ORACLE_TYPE_NUM_FROM_ATOM(_atom, _assign)        \
    A2M(DPI_ORACLE_TYPE_VARCHAR, _atom, _assign);            \
    else A2M(DPI_ORACLE_TYPE_NVARCHAR, _atom, _assign);      \
    else A2M(DPI_ORACLE_TYPE_CHAR, _atom, _assign);          \
    else A2M(DPI_ORACLE_TYPE_NCHAR, _atom, _assign);         \
    else A2M(DPI_ORACLE_TYPE_ROWID, _atom, _assign);         \
    else A2M(DPI_ORACLE_TYPE_RAW, _atom, _assign);           \
    else A2M(DPI_ORACLE_TYPE_NATIVE_FLOAT, _atom, _assign);  \
    else A2M(DPI_ORACLE_TYPE_NATIVE_DOUBLE, _atom, _assign); \
    else A2M(DPI_ORACLE_TYPE_NATIVE_INT, _atom, _assign);    \
    else A2M(DPI_ORACLE_TYPE_NATIVE_UINT, _atom, _assign);   \
    else A2M(DPI_ORACLE_TYPE_NUMBER, _atom, _assign);        \
    else A2M(DPI_ORACLE_TYPE_DATE, _atom, _assign);          \
    else A2M(DPI_ORACLE_TYPE_TIMESTAMP, _atom, _assign);     \
    else A2M(DPI_ORACLE_TYPE_TIMESTAMP_TZ, _atom, _assign);  \
    else A2M(DPI_ORACLE_TYPE_TIMESTAMP_LTZ, _atom, _assign); \
    else A2M(DPI_ORACLE_TYPE_INTERVAL_DS, _atom, _assign);   \
    else A2M(DPI_ORACLE_TYPE_INTERVAL_YM, _atom, _assign);   \
    else A2M(DPI_ORACLE_TYPE_CLOB, _atom, _assign);          \
    else A2M(DPI_ORACLE_TYPE_NCLOB, _atom, _assign);         \
    else A2M(DPI_ORACLE_TYPE_BLOB, _atom, _assign);          \
    else A2M(DPI_ORACLE_TYPE_BFILE, _atom, _assign);         \
    else A2M(DPI_ORACLE_TYPE_STMT, _atom, _assign);          \
    else A2M(DPI_ORACLE_TYPE_BOOLEAN, _atom, _assign);       \
    else A2M(DPI_ORACLE_TYPE_OBJECT, _atom, _assign);        \
    else A2M(DPI_ORACLE_TYPE_LONG_VARCHAR, _atom, _assign);  \
    else A2M(DPI_ORACLE_TYPE_LONG_RAW, _atom, _assign);      \
    else RAISE_STR_EXCEPTION("wrong or unsupported dpiOracleType type");

#define DPI_ORACLE_TYPE_NUM_TO_ATOM(_type, _assign)                  \
    switch (_type)                                                   \
    {                                                                \
        M2A(DPI_ORACLE_TYPE_VARCHAR, _assign);                       \
        M2A(DPI_ORACLE_TYPE_NVARCHAR, _assign);                      \
        M2A(DPI_ORACLE_TYPE_CHAR, _assign);                          \
        M2A(DPI_ORACLE_TYPE_NCHAR, _assign);                         \
        M2A(DPI_ORACLE_TYPE_ROWID, _assign);                         \
        M2A(DPI_ORACLE_TYPE_RAW, _assign);                           \
        M2A(DPI_NATIVE_TYPE_INTERVAL_DS, _assign);                   \
        M2A(DPI_ORACLE_TYPE_NATIVE_FLOAT, _assign);                  \
        M2A(DPI_ORACLE_TYPE_NATIVE_DOUBLE, _assign);                 \
        M2A(DPI_ORACLE_TYPE_NATIVE_INT, _assign);                    \
        M2A(DPI_ORACLE_TYPE_NATIVE_UINT, _assign);                   \
        M2A(DPI_ORACLE_TYPE_NUMBER, _assign);                        \
        M2A(DPI_ORACLE_TYPE_DATE, _assign);                          \
        M2A(DPI_ORACLE_TYPE_TIMESTAMP, _assign);                     \
        M2A(DPI_ORACLE_TYPE_TIMESTAMP_TZ, _assign);                  \
        M2A(DPI_ORACLE_TYPE_TIMESTAMP_LTZ, _assign);                 \
        M2A(DPI_ORACLE_TYPE_INTERVAL_DS, _assign);                   \
        M2A(DPI_ORACLE_TYPE_INTERVAL_YM, _assign);                   \
        M2A(DPI_ORACLE_TYPE_CLOB, _assign);                          \
        M2A(DPI_ORACLE_TYPE_NCLOB, _assign);                         \
        M2A(DPI_ORACLE_TYPE_BLOB, _assign);                          \
        M2A(DPI_ORACLE_TYPE_BFILE, _assign);                         \
        M2A(DPI_ORACLE_TYPE_STMT, _assign);                          \
        M2A(DPI_ORACLE_TYPE_BOOLEAN, _assign);                       \
        M2A(DPI_ORACLE_TYPE_OBJECT, _assign);                        \
        M2A(DPI_ORACLE_TYPE_LONG_VARCHAR, _assign);                  \
        M2A(DPI_ORACLE_TYPE_LONG_RAW, _assign);                      \
    default:                                                         \
        RAISE_STR_EXCEPTION("dpiOracleTypeNum value not supported"); \
    }

#endif // _DPIQUERYINFO_NIF_H_
