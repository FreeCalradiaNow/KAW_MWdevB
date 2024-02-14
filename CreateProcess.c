#include <stdio.h>
#include <Windows.h>

int main(void) {

	STARTUPINFOW si = { 0 };
	PROCESS_INFORMATION pi = { 0 };

	if (!CreateProcessW(
		L"C:\\Windows\\System32\\mspaint.exe",
		NULL,
		NULL,
		NULL,
		FALSE,
		BELOW_NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&si,
		&pi)) {
		 
			printf("(-) failed ro create process, error: %ld", pi.dwProcessId);
			return EXIT_FAILURE;
		}
 
	// Wait until child process exits.
	//WaitForSingleObject(pi.hProcess, INFINITE);
	//CloseHandle(pi.hProcess);
	//CloseHandle(pi.hThread);

	return EXIT_SUCCESS;
}