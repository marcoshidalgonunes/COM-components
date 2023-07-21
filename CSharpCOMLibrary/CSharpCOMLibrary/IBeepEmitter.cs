using System.Runtime.InteropServices;

namespace COMLibrary
{
    [Guid("167D1EC0-7ECD-4716-9CF4-A9FD6B54EAC8")]
    public interface IBeepEmitter
    {
        bool Beeped { get; }
    }
}
