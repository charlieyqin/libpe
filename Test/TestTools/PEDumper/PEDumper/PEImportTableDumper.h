#pragma once

#include "PEElementDumper.h"

class PEImportTableDumper :
    public PEElementDumper
{
public:
    PEImportTableDumper() : PEElementDumper("ImportTable") {}

    PEImportTableDumper & SetDumpElement(_In_ IPEImportTable *importTable) {
        _importTable = importTable;
        return *this;
    }

protected:
    void DoDump() override;

private:
    LibPEPtr<IPEImportTable> _importTable;
};

class PEImportModuleDumper :
    public PEElementDumper
{
public:
    PEImportModuleDumper() : PEElementDumper("ImportModule") {}

    PEImportModuleDumper & SetDumpElement(_In_ IPEImportModule *importModule) {
        _importModule = importModule;
        return *this;
    }

protected:
    void DoDump() override;

private:
    LibPEPtr<IPEImportModule> _importModule;
};

class PEImportFunctionDumper :
    public PEElementDumper
{
public:
    PEImportFunctionDumper() : PEElementDumper("ImportFunction") {}

    PEImportFunctionDumper & SetDumpElement(_In_ IPEImportFunction *importFunction) {
        _importFunction = importFunction; 
        return *this;
    }

protected:
    void DoDump() override;

private:
    LibPEPtr<IPEImportFunction> _importFunction;
};
