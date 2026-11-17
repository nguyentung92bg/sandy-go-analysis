// Namespace: Dino.BusSand.App
public static class ShaderWarmup // TypeDefIndex: 3268
{
	// Fields
	public static bool Enabled; // 0x0
	public const float BudgetMs = 8;
	private static ShaderVariantCollection _set; // 0x8
	private static bool _done; // 0x10
	private static int _missing; // 0x14
	private static float _spent; // 0x18

	// Properties
	public static bool Done { get; }

	// Methods

	// RVA: 0x215D878 Offset: 0x2159878 VA: 0x215D878
	public static bool get_Done() { }

	// RVA: 0x215D8FC Offset: 0x21598FC VA: 0x215D8FC
	public static bool Step() { }

	// RVA: 0x215D94C Offset: 0x215994C VA: 0x215D94C
	public static bool Step(float budgetMs) { }

	// RVA: 0x215DDBC Offset: 0x2159DBC VA: 0x215DDBC
	private static ShaderVariantCollection Load() { }

	// RVA: 0x215E180 Offset: 0x215A180 VA: 0x215E180
	private static void .cctor() { }
}

