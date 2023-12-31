﻿using System;
using System.Runtime.InteropServices;

namespace COMLibrary
{
    [Guid("6068B8AA-6829-4AAA-8DD8-32A8CEAF3186")]
    public class BeepEmitter : IBeepEmitter
    {
        [DllImport("kernel32.dll", SetLastError=true)]
        [return: MarshalAs(UnmanagedType.U4)]
        private static extern int Beep(uint dwFreq, uint dwDuration);

        public int Beeped
        {
            get { return Beep(3500, 50); }
        }
    }
}
