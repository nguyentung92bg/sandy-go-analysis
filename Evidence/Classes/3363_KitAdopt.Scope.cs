// Namespace: 
public sealed class KitAdopt.Scope // TypeDefIndex: 3363
{
	// Fields
	internal Transform Root; // 0x10
	internal Transform Pool; // 0x18
	internal KitPrefabs.Template T; // 0x20
	internal Transform[] Nodes; // 0x28
	internal bool[] Claimed; // 0x30
	internal readonly Dictionary<Transform, int> Index; // 0x38
	internal readonly Dictionary<ValueTuple<int, string>, int> Counts; // 0x40
	internal Dictionary<Transform, KitAdopt.Rest> Rests; // 0x48

	// Methods

	// RVA: 0x227D634 Offset: 0x2279634 VA: 0x227D634
	public void .ctor() { }
}

