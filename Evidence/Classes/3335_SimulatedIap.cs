// Namespace: Dino.BusSand.App
public class SimulatedIap : IIapProvider // TypeDefIndex: 3335
{
	// Fields
	public static bool Instant; // 0x0
	public static bool Fail; // 0x1

	// Methods

	// RVA: 0x217999C Offset: 0x217599C VA: 0x217999C Slot: 4
	public void Purchase(string productId, Action<bool> done) { }

	[IteratorStateMachine(typeof(SimulatedIap.<Delay>d__3))]
	// RVA: 0x2179B44 Offset: 0x2175B44 VA: 0x2179B44
	private static IEnumerator Delay(float s, Action a) { }

	// RVA: 0x2179BE8 Offset: 0x2175BE8 VA: 0x2179BE8
	public void .ctor() { }
}

