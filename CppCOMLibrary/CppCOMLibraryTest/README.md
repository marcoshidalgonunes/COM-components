# C++ COM Library
This is the C++ implementation of ```COMLibrary.BeepEmitter```, using [Microsoft Foundation Classes (MFC)](https://learn.microsoft.com/en-us/cpp/mfc/mfc-concepts) and [Advanced Template Library (ATL)](https://learn.microsoft.com/en-us/cpp/atl/active-template-library-atl-concepts).

To this development, the "Desktop development with C++" workload must be deployed in the Visual Studio installation. Besides that, the "C++ MFC for latest build tools (x86 & x64) needs to be installed as individual component of Visual Studio.

### Steps
Since COM development is no longer evolving, the latest Visual Studio versions contain bugs when uisng wizard and other code assistants. 

The project was created using the [beeper](https://github.com/microsoft/VCSamples/tree/master/VC2010Samples/ATL/General/beeper) code example as reference and following these steps:

1. Create a new project using "MFC Dynbamic-Link Library" project template.
2. The compilation of Interface Definiation Language (IDL) was done manually, running ```midl COMLibrary.idl``` in a Visual Studio Developer Command Prompt, normally installed during VS setup.
3. The VC++ Project Filter file was manually edited to include the ".rc2" file created during project setup and edited to include the registry declaration file (CppCOMLibrary.rgs) with instruction to register the COM Component.
4. To compile in x64 mode, an instruction was included in the "COMLibrary.cpp" file to fix a similar error as [Error LNK2005 DllMain already defined in uafxcw.lib(dllmodul.obj)](https://stackoverflow.com/questions/66378566/error-lnk2005dllmain-already-defined-in-uafxcw-libdllmodul-obj).
