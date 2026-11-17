// Namespace: Dino.BusSand.View
public static class MaterialLibrary // TypeDefIndex: 8452
{
	// Fields
	private static readonly Dictionary<int, Material> Cache; // 0x0
	private static readonly Dictionary<string, Material> Named; // 0x8
	private static readonly string[] Base; // 0x10
	private static readonly string[] Shade; // 0x18

	// Properties
	private static Shader Toon { get; }
	public static Material Detail { get; }
	public static Material Hidden { get; }
	public static Material HiddenPaint { get; }
	public static Material GlassEmpty { get; }

	// Methods

	// RVA: 0x23B95D0 Offset: 0x23B55D0 VA: 0x23B95D0
	public static Color BodyColor(byte color) { }

	// RVA: 0x23B96F4 Offset: 0x23B56F4 VA: 0x23B96F4
	private static Shader get_Toon() { }

	// RVA: 0x23B975C Offset: 0x23B575C VA: 0x23B975C
	public static Material Body(byte color) { }

	// RVA: 0x23B9ED8 Offset: 0x23B5ED8 VA: 0x23B9ED8
	private static float Ratio(float s, float b) { }

	// RVA: 0x23B9F14 Offset: 0x23B5F14 VA: 0x23B9F14
	public static Material get_Detail() { }

	// RVA: 0x23BA174 Offset: 0x23B6174 VA: 0x23BA174
	public static Material Glossy(string name, Color color, float metallic = 0.13, float roughness = 0.45) { }

	// RVA: 0x23BA2D4 Offset: 0x23B62D4 VA: 0x23BA2D4
	public static Material get_Hidden() { }

	// RVA: 0x23BA3EC Offset: 0x23B63EC VA: 0x23BA3EC
	public static Material Pile(byte color) { }

	// RVA: 0x23BA8C8 Offset: 0x23B68C8 VA: 0x23BA8C8
	public static Material Ground(string name, Color color, Texture tex) { }

	// RVA: 0x23B1214 Offset: 0x23AD214 VA: 0x23B1214
	public static Material Unlit(string name, Color color, Texture tex, bool additive = False, int queueOffset = 0) { }

	// RVA: 0x23BAA20 Offset: 0x23B6A20 VA: 0x23BAA20
	public static Material Toonish(string name, Color color, float spec = 0.2) { }

	// RVA: 0x23BAB64 Offset: 0x23B6B64 VA: 0x23BAB64
	private static Material LitTemplate(string n) { }

	// RVA: 0x23B0E94 Offset: 0x23ACE94 VA: 0x23B0E94
	public static Material Lit(string name, Color color, float smoothness = 0.45, float metallic = 0) { }

	// RVA: 0x23BACE0 Offset: 0x23B6CE0 VA: 0x23BACE0
	public static Material Emissive(string name, Color color, float intensity) { }

	// RVA: 0x23BAE24 Offset: 0x23B6E24 VA: 0x23BAE24
	public static Color PaintColor(byte color) { }

	// RVA: 0x23BAEF0 Offset: 0x23B6EF0 VA: 0x23BAEF0
	public static Material Paint(byte color) { }

	// RVA: 0x23BB1CC Offset: 0x23B71CC VA: 0x23BB1CC
	public static Material get_HiddenPaint() { }

	// RVA: 0x23BB2E4 Offset: 0x23B72E4 VA: 0x23BB2E4
	public static Material Glass(byte color, float fillMinY, float fillMaxY) { }

	// RVA: 0x23BB4C8 Offset: 0x23B74C8 VA: 0x23BB4C8
	public static Material get_GlassEmpty() { }

	// RVA: 0x23BA02C Offset: 0x23B602C VA: 0x23BA02C
	private static Material Get(string key, Func<Material> make) { }

	// RVA: 0x23BB5E0 Offset: 0x23B75E0 VA: 0x23BB5E0
	public static void ClearCache() { }

	// RVA: 0x23BB684 Offset: 0x23B7684 VA: 0x23BB684
	private static void .cctor() { }
}

