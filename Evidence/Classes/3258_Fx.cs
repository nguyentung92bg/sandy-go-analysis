// Namespace: Dino.BusSand.App
public static class Fx // TypeDefIndex: 3258
{
	// Fields
	private static readonly Dictionary<string, Stack<GameObject>> Pool; // 0x0
	private static readonly List<Fx.Live> Active; // 0x8
	private static Transform s_root; // 0x10
	private static Fx.FxRunner s_runner; // 0x18

	// Properties
	public static Transform Root { get; }

	// Methods

	// RVA: 0x2150538 Offset: 0x214C538 VA: 0x2150538
	public static Transform get_Root() { }

	// RVA: 0x21506BC Offset: 0x214C6BC VA: 0x21506BC
	public static GameObject Play(string key, Vector3 pos, Quaternion rot, float scale = 1, float minLife = 0.1, Transform parent) { }

	// RVA: 0x2150F54 Offset: 0x214CF54 VA: 0x2150F54
	public static GameObject Attach(string key, Transform parent, Vector3 localPos) { }

	// RVA: 0x21510EC Offset: 0x214D0EC VA: 0x21510EC
	public static void Release(GameObject go, string key) { }

	// RVA: 0x21509AC Offset: 0x214C9AC VA: 0x21509AC
	private static GameObject Acquire(string key) { }

	// RVA: 0x2150B94 Offset: 0x214CB94 VA: 0x2150B94
	public static float Restart(GameObject go) { }

	// RVA: 0x21514C8 Offset: 0x214D4C8 VA: 0x21514C8
	internal static void Tick() { }

	// RVA: 0x21517B4 Offset: 0x214D7B4 VA: 0x21517B4
	public static void ClearAll() { }

	// RVA: 0x2151A7C Offset: 0x214DA7C VA: 0x2151A7C
	private static void .cctor() { }
}

