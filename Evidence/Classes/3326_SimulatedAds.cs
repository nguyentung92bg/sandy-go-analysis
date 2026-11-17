// Namespace: Dino.BusSand.App
public class SimulatedAds : IAdProvider // TypeDefIndex: 3326
{
	// Fields
	public static bool Instant; // 0x0
	public static bool FailRewarded; // 0x1
	public static float ReloadSeconds; // 0x4
	private static float s_readyAt; // 0x8

	// Methods

	// RVA: 0x2175438 Offset: 0x2171438 VA: 0x2175438 Slot: 4
	public bool RewardedReady(string slot) { }

	// RVA: 0x21754A8 Offset: 0x21714A8 VA: 0x21754A8 Slot: 5
	public void ShowRewarded(string slot, Action<bool, string> done) { }

	// RVA: 0x21756D4 Offset: 0x21716D4 VA: 0x21756D4
	private static void Shown() { }

	// RVA: 0x21757D0 Offset: 0x21717D0 VA: 0x21757D0 Slot: 6
	public void ShowInterstitial(string slot, Action<bool> done) { }

	[IteratorStateMachine(typeof(SimulatedAds.<FakeAd>d__8))]
	// RVA: 0x2175748 Offset: 0x2171748 VA: 0x2175748
	private static IEnumerator FakeAd(string label, Action done) { }

	// RVA: 0x21759DC Offset: 0x21719DC VA: 0x21759DC
	public void .ctor() { }
}

