﻿/*
 * PROJECT:   NanaZip
 * FILE:      NanaZip.Frieren.h
 * PURPOSE:   Definition for NanaZip.Frieren
 *
 * LICENSE:   The MIT License
 *
 * MAINTAINER: MouriNaruto (Kenji.Mouri@outlook.com)
 */

#ifndef NANAZIP_FRIEREN
#define NANAZIP_FRIEREN

#include <Windows.h>

/**
 * @brief Initialize NanaZip.Frieren for thread.
 * @return If the function succeeds, it returns S_OK. Otherwise, it returns an
 *         HRESULT error code.
*/
EXTERN_C HRESULT WINAPI NanaZipFrierenThreadInitialize();

/**
 * @brief Uninitialize NanaZip.Frieren for thread.
 * @return If the function succeeds, it returns S_OK. Otherwise, it returns an
 *         HRESULT error code.
*/
EXTERN_C HRESULT WINAPI NanaZipFrierenThreadUninitialize();

#endif // !NANAZIP_FRIEREN
