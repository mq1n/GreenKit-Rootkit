#pragma once

typedef void(*APPLY)(HANDLE);


BOOL process_allSuspendApplyResume(APPLY);
BOOL process_suspendOrResumeAllThreads(DWORD, BOOL);

#include "TlHelp32.h"
