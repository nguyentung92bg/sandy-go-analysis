// Namespace: Dino.BusSand.App
public static class Tables // TypeDefIndex: 3271
{
	// Fields
	private static readonly Dictionary<string, Dictionary<string, object>> Cache; // 0x0

	// Methods

	// RVA: 0x215EB64 Offset: 0x215AB64 VA: 0x215EB64
	public static string Json(string name) { }

	// RVA: 0x215EBEC Offset: 0x215ABEC VA: 0x215EBEC
	public static Dictionary<string, object> Table(string name) { }

	// RVA: 0x215ED9C Offset: 0x215AD9C VA: 0x215ED9C
	public static Dictionary<string, object> Row(string table, int id) { }

	// RVA: 0x215EE18 Offset: 0x215AE18 VA: 0x215EE18
	public static Dictionary<string, object> Row(string table, string id) { }

	[IteratorStateMachine(typeof(Tables.<Rows>d__5))]
	// RVA: 0x215EEFC Offset: 0x215AEFC VA: 0x215EEFC
	public static IEnumerable<Dictionary<string, object>> Rows(string table) { }

	// RVA: 0x215EFB0 Offset: 0x215AFB0 VA: 0x215EFB0
	private static void .cctor() { }
}

