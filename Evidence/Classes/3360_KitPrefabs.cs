// Namespace: Dino.BusSand.App.UI
public static class KitPrefabs // TypeDefIndex: 3360
{
	// Fields
	public static bool Enabled; // 0x0
	public const string Folder = "UIKit";
	private const string IndexPath = "UIKit/KitPrefabIndex";
	private static Dictionary<string, string> s_paths; // 0x8
	private static readonly Dictionary<string, KitPrefabs.Template> s_templates; // 0x10
	private static Transform s_hold; // 0x18

	// Properties
	internal static Transform Hold { get; }

	// Methods

	// RVA: 0x2181484 Offset: 0x217D484 VA: 0x2181484
	private static void EnsureIndex() { }

	// RVA: 0x218177C Offset: 0x217D77C VA: 0x218177C
	public static bool Has(string key) { }

	// RVA: 0x2181840 Offset: 0x217D840 VA: 0x2181840
	public static GameObject Spawn(string key, Transform parent) { }

	// RVA: 0x2181BDC Offset: 0x217DBDC VA: 0x2181BDC
	public static bool Respawn(UIPanel panel) { }

	// RVA: 0x216B2FC Offset: 0x21672FC VA: 0x216B2FC
	public static void Preload(string[] keys) { }

	// RVA: 0x2181F28 Offset: 0x217DF28 VA: 0x2181F28
	public static bool Prepared(string key) { }

	// RVA: 0x2182008 Offset: 0x217E008 VA: 0x2182008
	public static void ClearCache() { }

	// RVA: 0x2181940 Offset: 0x217D940 VA: 0x2181940
	public static KitPrefabs.Template Get(string key) { }

	// RVA: 0x2181D88 Offset: 0x217DD88 VA: 0x2181D88
	internal static Transform get_Hold() { }

	// RVA: 0x21822A4 Offset: 0x217E2A4 VA: 0x21822A4
	private static KitPrefabs.Template Prepare(string key, GameObject prefab) { }

	// RVA: 0x2183A68 Offset: 0x217FA68 VA: 0x2183A68
	private static void Owners(Transform of, int ofIndex, Dictionary<string, int> index, List<Transform> list, List<int> parent, List<int> after) { }

	// RVA: 0x2183380 Offset: 0x217F380 VA: 0x2183380
	public static void Undriven(Transform node, KitValues baked, KitValues v) { }

	// RVA: 0x2183FB0 Offset: 0x217FFB0 VA: 0x2183FB0
	private static void StripMade(KitNode n) { }

	// RVA: 0x21843A4 Offset: 0x21803A4 VA: 0x21843A4
	private static int Rank(Component c) { }

	// RVA: 0x2184448 Offset: 0x2180448 VA: 0x2184448
	private static void .cctor() { }
}

