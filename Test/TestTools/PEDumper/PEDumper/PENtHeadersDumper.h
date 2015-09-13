#pragma once

#include "PEElementDumper.h"

class PENtHeadersDumper :
    public PEElementDumper
{
public:
    PENtHeadersDumper() : PEElementDumper("NtHeaders") {}

    PENtHeadersDumper & SetDumpElement(_In_ IPENtHeaders *ntHeaders) {
        _ntHeaders = ntHeaders;
        return *this;
    }

protected:
    void DoDump() override;

private:
    LibPEPtr<IPENtHeaders> _ntHeaders;
};

class PEFileHeaderDumper :
    public PEElementDumper
{
public:
    PEFileHeaderDumper() : PEElementDumper("FileHeader") {}

    PEFileHeaderDumper & SetDumpElement(_In_ IPEFileHeader *fileHeader) {
        _fileHeader = fileHeader;
        return *this;
    }

protected:
    void DoDump() override;

private:
    LibPEPtr<IPEFileHeader> _fileHeader;
};

class PEOptionalHeaderDumper :
    public PEElementDumper
{
public:
    PEOptionalHeaderDumper() : PEElementDumper("OptionalHeader") {}

    PEOptionalHeaderDumper & SetDumpElement(_In_ IPEOptionalHeader *optionalHeader) {
        _optionalHeader = optionalHeader;
        return *this;
    }

protected:
    void DoDump() override;

private:
    LibPEPtr<IPEOptionalHeader> _optionalHeader;
};
