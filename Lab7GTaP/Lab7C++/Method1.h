#define METHOD1_API __declspec(dllexport)

extern "C" {
	METHOD1_API void TestSort(int numArr[], int length); //Add this func to the API for the DLL file
}
