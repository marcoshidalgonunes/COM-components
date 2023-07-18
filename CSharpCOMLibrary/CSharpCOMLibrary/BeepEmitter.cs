using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CSharpCOMLibrary
{
    [Guid("2188FD50-47DD-43C8-802F-7751EB3256E9")]
    public class BeepEmitter : IBeepEmitter
    {
        [DllImport("kernel32.dll", SetLastError=true)]
        [return: MarshalAs(UnmanagedType.Bool)]
        private static extern bool Beep(uint dwFreq, uint dwDuration);

        public bool Get
        {
            get { return Beep(3500, 50); }
        }
    }
}
