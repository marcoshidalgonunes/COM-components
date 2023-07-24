# Clients COM Library
These are two examples of how to call a COM Component with same ProgId, no matter if it is compiled using .NET Framework or C++ with MFC and ATL.

## beep.vbs
This is a VBScript to be executed using Windows Script Host (WSH).

In case of testing a 32-bit, execute the following steps:

1. Click Windows Key + R and execute ```%windir%\SysWoW64\cmd.exe```
2. Navigate to the folder where beep.vbs is found
3. Run ```cscript beep.vbs```

## index.html
This is an HTML page that should be loaded using Edge in [Internet Explorer (IE) Mode](https://support.microsoft.com/en-us/microsoft-edge/internet-explorer-mode-in-microsoft-edge-6604162f-e38a-48b2-acd2-682dbac6f0de).

Internet Explorer mode triggers an ```iexplore.exe``` 32-bit instance. To run IE as 64-bit instance, a registry entry should be created as described [here](https://learn.microsoft.com/en-us/answers/questions/591630/about-the-ie32bit-to-64bit-method).
