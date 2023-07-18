set beepEmitter = CreateObject("CSharpCOMLibrary.BeepEmitter")
dim beep
beep = beepEmitter.Get
MsgBox("Beep emitted: " & beep)