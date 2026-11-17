// Namespace: Dino.BusSand
public static class Haptics // TypeDefIndex: 8393
{
	// Fields
	public static bool Enabled; // 0x0
	private static float _lastAny; // 0x4
	private static float _lastTick; // 0x8
	private static AndroidJavaObject _vibrator; // 0x10
	private static AndroidJavaClass _effect; // 0x18
	private static readonly Dictionary<int, AndroidJavaObject> s_oneShots; // 0x20
	private static int _sdk; // 0x28

	// Methods

	// RVA: 0x23888A4 Offset: 0x23848A4 VA: 0x23888A4
	public static void Tick(float strength01) { }

	// RVA: 0x2388ED8 Offset: 0x2384ED8 VA: 0x2388ED8
	public static void Play(Haptics.Kind k) { }

	// RVA: 0x238978C Offset: 0x238578C VA: 0x238978C
	private static AndroidJavaObject Vibrator() { }

	// RVA: 0x23889E4 Offset: 0x23849E4 VA: 0x23889E4
	private static void Vibrate(long ms, int amplitude) { }

	// RVA: 0x23891F4 Offset: 0x23851F4 VA: 0x23891F4
	private static void Pattern(long[] timings, int[] amps) { }

	// RVA: 0x2389DBC Offset: 0x2385DBC VA: 0x2389DBC
	private static void .cctor() { }
}

