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
            bool beep = beepEmitter.Beeped;

            Assert.IsTrue(beep);
        }
    }
}
