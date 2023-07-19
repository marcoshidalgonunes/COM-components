set beepEmitter = CreateObject("COMLibrary.BeepEmitter")
dim beep
beep = beepEmitter.Get
MsgBox("Beep emitted: " & beep)