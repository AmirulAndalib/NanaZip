﻿/*
 * PROJECT:   NanaZip
 * FILE:      NanaZip.Codecs.MultiThreadWrapper.Brotli.h
 * PURPOSE:   Definition for Brotli Multi Thread Wrapper
 *
 * LICENSE:   The MIT License
 *
 * MAINTAINER: MouriNaruto (Kenji.Mouri@outlook.com)
 */

#ifndef NANAZIP_CODECS_MULTI_THREAD_WRAPPER_BROTLI
#define NANAZIP_CODECS_MULTI_THREAD_WRAPPER_BROTLI

#include "NanaZip.Codecs.MultiThreadWrapper.Common.h"

#include <stdint.h>
#include <brotli-mt.h>

EXTERN_C int NanaZipCodecsBrotliRead(
    void* Context,
    BROTLIMT_Buffer* Input);

EXTERN_C int NanaZipCodecsBrotliWrite(
    void* Context,
    BROTLIMT_Buffer* Output);

#endif // !NANAZIP_CODECS_MULTI_THREAD_WRAPPER_BROTLI
