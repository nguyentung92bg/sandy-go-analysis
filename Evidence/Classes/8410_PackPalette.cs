// Namespace: Dino.BusSand.View
public static class PackPalette // TypeDefIndex: 8410
{
	// Fields
	private const string HiddenName = "Hidden";
	private static readonly Color[] MainCache; // 0x0
	private static readonly Color[] ShadowCache; // 0x8
	private static readonly bool[] Ready; // 0x10
	private static readonly ArtPackData.Swatch[] LevelSwatch; // 0x18
	private static Color _hiddenMain; // 0x20
	private static Color _hiddenShadow; // 0x30
	private static bool _hiddenReady; // 0x40
	private static readonly Dictionary<Color32, Color> ShadowByMain; // 0x48

	// Properties
	public static Color HiddenMain { get; }
	public static Color HiddenShadow { get; }

	// Methods

	// RVA: 0x238DFDC Offset: 0x2389FDC VA: 0x238DFDC
	public static void Reset() { }

	// RVA: 0x238E0FC Offset: 0x238A0FC VA: 0x238E0FC
	public static void UseLevel(IEnumerable<byte> colors) { }

	// RVA: 0x238F1D0 Offset: 0x238B1D0 VA: 0x238F1D0
	public static Color[] MainsFor(IEnumerable<byte> colors) { }

	// RVA: 0x238FD98 Offset: 0x238BD98 VA: 0x238FD98
	public static string SwatchName(byte id) { }

	// RVA: 0x238E800 Offset: 0x238A800 VA: 0x238E800
	private static List<ArtPackData.Swatch> Swatches() { }

	// RVA: 0x238FE88 Offset: 0x238BE88 VA: 0x238FE88
	private static ArtPackData.Swatch Find(string name) { }

	// RVA: 0x239002C Offset: 0x238C02C VA: 0x239002C
	private static void Resolve(byte id) { }

	// RVA: 0x238FA7C Offset: 0x238BA7C VA: 0x238FA7C
	private static ArtPackData.Swatch Nearest(byte id) { }

	// RVA: 0x238EA5C Offset: 0x238AA5C VA: 0x238EA5C
	private static Vector3 Lab(Color c) { }

	// RVA: 0x238ED10 Offset: 0x238AD10 VA: 0x238ED10
	private static double Distance(Vector3 a, Vector3 b) { }

	// RVA: 0x238EDAC Offset: 0x238ADAC VA: 0x238EDAC
	private static int[] Assign(double[,] cost, int n, int m) { }

	// RVA: 0x23902E4 Offset: 0x238C2E4 VA: 0x23902E4
	public static Color ShadeOf(Color c) { }

	// RVA: 0x2390424 Offset: 0x238C424 VA: 0x2390424
	public static Color ShadowForMain(Color main) { }

	// RVA: 0x2390528 Offset: 0x238C528 VA: 0x2390528
	public static Color Main(byte id) { }

	// RVA: 0x2390624 Offset: 0x238C624 VA: 0x2390624
	public static Color Shadow(byte id) { }

	// RVA: 0x2390720 Offset: 0x238C720 VA: 0x2390720
	public static Color get_HiddenMain() { }

	// RVA: 0x2390858 Offset: 0x238C858 VA: 0x2390858
	public static Color get_HiddenShadow() { }

	// RVA: 0x2390780 Offset: 0x238C780 VA: 0x2390780
	private static void EnsureHidden() { }

	// RVA: 0x23908B8 Offset: 0x238C8B8 VA: 0x23908B8
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x23903A8 Offset: 0x238C3A8 VA: 0x23903A8
	internal static float <Lab>g__Lin|16_0(float v) { }

	[CompilerGenerated]
	// RVA: 0x23903EC Offset: 0x238C3EC VA: 0x23903EC
	internal static float <Lab>g__F|16_1(float t) { }
}

