// Namespace: Dino.BusSand.Core
public static class SimProfiler // TypeDefIndex: 8562
{
	// Fields
	public static readonly string[] Names; // 0x0
	public static readonly long[] Ticks; // 0x8
	private static readonly long[] s_start; // 0x10
	public static readonly long[] Counts; // 0x18

	// Methods

	[Conditional("SIM_PROFILE")]
	// RVA: 0x241DD30 Offset: 0x2419D30 VA: 0x241DD30
	public static void Begin(int phase) { }

	[Conditional("SIM_PROFILE")]
	// RVA: 0x241DDDC Offset: 0x2419DDC VA: 0x241DDDC
	public static void End(int phase) { }

	[Conditional("SIM_PROFILE")]
	// RVA: 0x241DEC0 Offset: 0x2419EC0 VA: 0x241DEC0
	public static void Count(int what, long n) { }

	// RVA: 0x241DF50 Offset: 0x2419F50 VA: 0x241DF50
	public static void Reset() { }

	// RVA: 0x241E060 Offset: 0x241A060 VA: 0x241E060
	public static double Ms(int phase) { }

	// RVA: 0x241E124 Offset: 0x241A124 VA: 0x241E124
	private static void .cctor() { }
}

