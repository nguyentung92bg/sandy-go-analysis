// Namespace: 
public sealed class KitPrefabs.Template // TypeDefIndex: 3358
{
	// Fields
	public string Key; // 0x10
	public GameObject Root; // 0x18
	public int Count; // 0x20
	public int Baked; // 0x24
	internal int[] Parent; // 0x28
	internal int[] After; // 0x30
	internal readonly Dictionary<ValueTuple<int, string, int>, int> Slots; // 0x38
	[TupleElementNames(new[] { "Baked", "Owner" })]
	public readonly Dictionary<int, ValueTuple<KitValues, KitValues>> Edits; // 0x40

	// Methods

	// RVA: 0x2182FB0 Offset: 0x217EFB0 VA: 0x2182FB0
	public void .ctor() { }
}

