// Namespace: Dino.BusSand.App
public static class BootTrace // TypeDefIndex: 3250
{
	// Fields
	private static readonly List<BootTrace.Entry> s_entries; // 0x0
	private static string s_now; // 0x8
	private static string s_worstAt; // 0x10
	private static float s_worst; // 0x18
	private static int s_frames; // 0x1C
	private static int s_slow; // 0x20
	private static bool s_done; // 0x24
	[TupleElementNames(new[] { "n", "ms" })]
	private static readonly Dictionary<string, ValueTuple<int, float>> s_sums; // 0x28
	private static int s_armed; // 0x30

	// Properties
	private static bool Verbose { get; }

	// Methods

	// RVA: 0x214DEC8 Offset: 0x2149EC8 VA: 0x214DEC8
	private static bool get_Verbose() { }

	[RuntimeInitializeOnLoadMethod(4)]
	// RVA: 0x214DF18 Offset: 0x2149F18 VA: 0x214DF18
	private static void Reset() { }

	// RVA: 0x214E018 Offset: 0x214A018 VA: 0x214E018
	public static void Mark(string what) { }

	// RVA: 0x214E420 Offset: 0x214A420 VA: 0x214E420
	public static void Run(string what, Action step) { }

	// RVA: 0x214E544 Offset: 0x214A544 VA: 0x214E544
	public static void Took(string what, float ms) { }

	// RVA: 0x214E5A8 Offset: 0x214A5A8 VA: 0x214E5A8
	public static void Sum(string bucket, float ms) { }

	// RVA: 0x214E6D0 Offset: 0x214A6D0 VA: 0x214E6D0
	public static void Frame(float dt) { }

	// RVA: 0x214E070 Offset: 0x214A070 VA: 0x214E070
	private static void Add(string what, float ms) { }

	// RVA: 0x214EB70 Offset: 0x214AB70 VA: 0x214EB70
	public static void Done(string screen) { }

	// RVA: 0x214EAF0 Offset: 0x214AAF0 VA: 0x214EAF0
	private static string F(float s) { }

	// RVA: 0x214F460 Offset: 0x214B460 VA: 0x214F460
	private static void .cctor() { }
}

