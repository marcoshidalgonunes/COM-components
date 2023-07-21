set beepEmitter = CreateObject("COMLibrary.BeepEmitter")
dim beeped
beeped = beepEmitter.Beeped
MsgBox("Beep emitted: " & beeped)