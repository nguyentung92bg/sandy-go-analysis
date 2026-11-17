// Namespace: Dino.BusSand
public sealed class DataPack // TypeDefIndex: 8379
{
	// Fields
	public const string LevelsPath = "Levels/levels";
	public const string TablesPath = "Config/tables";
	private static readonly byte[] PackMagic; // 0x0
	private static readonly byte[] ContainerMagic; // 0x8
	private static readonly Dictionary<string, DataPack> s_open; // 0x10
	private readonly Dictionary<string, byte[]> _entries; // 0x10
	private static readonly byte[] KeyA; // 0x18
	private static readonly byte[] KeyB; // 0x20

	// Properties
	public IEnumerable<string> Names { get; }

	// Methods

	// RVA: 0x23795B0 Offset: 0x23755B0 VA: 0x23795B0
	private void .ctor(Dictionary<string, byte[]> entries) { }

	// RVA: 0x23795E0 Offset: 0x23755E0 VA: 0x23795E0
	public IEnumerable<string> get_Names() { }

	// RVA: 0x2379630 Offset: 0x2375630 VA: 0x2379630
	public static DataPack Open(string resourcesPath) { }

	// RVA: 0x237A35C Offset: 0x237635C VA: 0x237A35C
	public static byte[] Seal(string text) { }

	// RVA: 0x237B3A4 Offset: 0x23773A4 VA: 0x237B3A4
	public static bool IsSealed(byte[] file) { }

	// RVA: 0x237B48C Offset: 0x237748C VA: 0x237B48C
	public static string Unseal(byte[] file) { }

	// RVA: 0x237B910 Offset: 0x2377910 VA: 0x237B910
	public static void Reset() { }

	// RVA: 0x237B988 Offset: 0x2377988 VA: 0x237B988
	public bool Has(string name) { }

	// RVA: 0x237B52C Offset: 0x237752C VA: 0x237B52C
	public string Text(string name) { }

	// RVA: 0x237B9E0 Offset: 0x23779E0 VA: 0x237B9E0
	public string ContentId() { }

	// RVA: 0x237BE00 Offset: 0x2377E00 VA: 0x237BE00
	private static uint Fnv(uint h, byte b) { }

	// RVA: 0x237BE18 Offset: 0x2377E18 VA: 0x237BE18
	public static DataPack FromBytes(byte[] file) { }

	// RVA: 0x237A450 Offset: 0x2376450 VA: 0x237A450
	public static byte[] Pack(IEnumerable<KeyValuePair<string, string>> entries) { }

	// RVA: 0x23799D0 Offset: 0x23759D0 VA: 0x23799D0
	private static Dictionary<string, byte[]> Unpack(byte[] file) { }

	// RVA: 0x237B418 Offset: 0x2377418 VA: 0x237B418
	private static bool StartsWith(byte[] a, byte[] prefix) { }

	// RVA: 0x237BEA0 Offset: 0x2377EA0 VA: 0x237BEA0
	private static byte[] Key() { }

	// RVA: 0x237C0B0 Offset: 0x23780B0 VA: 0x237C0B0
	private static byte[] MacKey() { }

	// RVA: 0x237C258 Offset: 0x2378258 VA: 0x237C258
	private static void .cctor() { }
}

