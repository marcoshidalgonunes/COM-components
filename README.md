# COM-components
This repository contains example of Component Object Model (COM) component written in C# and C++.

Both components expose the same ProgId - ```COMLibrary.BeepEmitter``` - showing they achieve the same functionality. They were developed using Visual Studio, since COM is a Windows feature and the IDE offers full support for it. 

> **Warning**
VS Code is not suitable for this kind of development. There is no official extensions to support COM development.

There are two clients: a VBS Script and an HTML page to be executed in Internet Explorer mode under Edge, snce IE is not supported anymore.

