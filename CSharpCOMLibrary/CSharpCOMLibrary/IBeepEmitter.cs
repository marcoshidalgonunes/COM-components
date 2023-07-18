using System.Runtime.InteropServices;

namespace CSharpCOMLibrary
{
    [Guid("3647ABAB-4944-4086-9D7C-DF58C1C2AE87")]
    public interface IBeepEmitter
    {
        bool Get { get; }
    }
}
