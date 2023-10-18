using COMLibrary;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace COMLibraryTest
{
    [TestClass]
    public class BeepEmitterTest
    {
        private readonly BeepEmitter beepEmitter = new BeepEmitter();

        [TestMethod]
        public void TestGetProperty()
        {
            int beep = beepEmitter.Beeped;

            Assert.IsTrue(beep > 0);
        }
    }
}
