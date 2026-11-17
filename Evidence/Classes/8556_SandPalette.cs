// Namespace: Dino.BusSand.Core
public static class SandPalette // TypeDefIndex: 8556
{
	// Fields
	public const int MaxColors = 64;
	public static readonly string[] GameColors; // 0x0
	public const float ShadePerStep = 0.03;
	private static readonly string[] Names; // 0x8
	private static readonly Dictionary<string, string> Aliases; // 0x10
	private static readonly string[] Hex; // 0x18
	private static Dictionary<string, byte> _byName; // 0x20
	private static readonly Color32[] Rgb; // 0x28
	private static bool _rgbReady; // 0x30

	// Methods

	// RVA: 0x2419178 Offset: 0x2415178 VA: 0x2419178
	public static byte[] GameColorIds() { }

	// RVA: 0x2419278 Offset: 0x2415278 VA: 0x2419278
	public static byte Id(string name) { }

	// RVA: 0x2419630 Offset: 0x2415630 VA: 0x2419630
	public static string Name(byte id) { }

	// RVA: 0x24196FC Offset: 0x24156FC VA: 0x24196FC
	public static Color32 Color(byte id) { }

	// RVA: 0x2419868 Offset: 0x2415868 VA: 0x2419868
	public static void Override(byte id, Color32 c) { }

	// RVA: 0x2419918 Offset: 0x2415918 VA: 0x2419918
	public static Color32 Resolve(byte id, sbyte shade) { }

	// RVA: 0x2419A34 Offset: 0x2415A34 VA: 0x2419A34
	private static byte Scale(byte c, float k) { }

	// RVA: 0x2419B50 Offset: 0x2415B50 VA: 0x2419B50
	private static void .cctor() { }
}

