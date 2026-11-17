// Namespace: Dino.BusSand.App
public static class UiAssets // TypeDefIndex: 3287
{
	// Fields
	private static UiAssetsMap s_map; // 0x0
	private static Dictionary<string, string> _prefabs; // 0x8
	private static Dictionary<string, string> _clips; // 0x10
	private static Dictionary<string, string> _sprites; // 0x18
	private static Dictionary<string, string> _materials; // 0x20
	private static Dictionary<string, string> _textures; // 0x28
	private static Dictionary<string, string> _fonts; // 0x30
	private static readonly Dictionary<string, Object> s_cache; // 0x38
	private static readonly HashSet<string> s_missing; // 0x40
	private static bool s_init; // 0x48
	private static AsyncOperationHandle s_initOp; // 0x50
	private static bool s_initStarted; // 0x68
	private static readonly HashSet<string> s_loading; // 0x70

	// Properties
	public static bool Ready { get; }

	// Methods

	// RVA: 0x2162BB4 Offset: 0x215EBB4 VA: 0x2162BB4
	private static void Ensure() { }

	// RVA: 0x216312C Offset: 0x215F12C VA: 0x216312C
	public static void BeginInit() { }

	// RVA: 0x21632F8 Offset: 0x215F2F8 VA: 0x21632F8
	public static bool get_Ready() { }

	// RVA: 0x2163350 Offset: 0x215F350 VA: 0x2163350
	public static Func<bool> PreloadClips(IList<string> names) { }

	// RVA: -1 Offset: -1
	private static Func<bool> Preload<T>(Dictionary<string, string> table, IList<string> names) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2947310 Offset: 0x2943310 VA: 0x2947310
	|-UiAssets.Preload<object>
	*/

	// RVA: 0x2162F30 Offset: 0x215EF30 VA: 0x2162F30
	private static Dictionary<string, string> Map(List<UiAssetsMap.Entry> list) { }

	// RVA: 0x21633CC Offset: 0x215F3CC VA: 0x21633CC
	private static void Miss(string kind, string key) { }

	// RVA: -1 Offset: -1
	private static T Load<T>(Dictionary<string, string> table, string name) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2946EC8 Offset: 0x2942EC8 VA: 0x2946EC8
	|-UiAssets.Load<object>
	*/

	// RVA: 0x21513B8 Offset: 0x214D3B8 VA: 0x21513B8
	public static GameObject Prefab(string key) { }

	// RVA: 0x2163510 Offset: 0x215F510 VA: 0x2163510
	public static bool HasPrefab(string key) { }

	// RVA: 0x21635B4 Offset: 0x215F5B4 VA: 0x21635B4
	public static AudioClip Clip(string key) { }

	// RVA: 0x21636C4 Offset: 0x215F6C4 VA: 0x21636C4
	public static Sprite Sprite(string key) { }

	// RVA: 0x2163924 Offset: 0x215F924 VA: 0x2163924
	public static Material Material(string key) { }

	// RVA: 0x2163A34 Offset: 0x215FA34 VA: 0x2163A34
	public static Texture Texture(string key) { }

	// RVA: 0x2163B44 Offset: 0x215FB44 VA: 0x2163B44
	public static Object Shared(string name, Type type) { }

	// RVA: 0x2163E4C Offset: 0x215FE4C VA: 0x2163E4C
	private static void .cctor() { }
}

