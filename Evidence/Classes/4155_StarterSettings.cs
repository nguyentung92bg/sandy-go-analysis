// Namespace: Dino.BusSand.App.Meta
[Serializable]
public sealed class StarterSettings // TypeDefIndex: 4155
{
	// Fields
	public bool enabled; // 0x10
	[Tooltip("TbStoreItemConfig id (9002 = starter_pack).")]
	public int storeItem; // 0x14
	[Min(1)]
	public int fromLevel; // 0x18
	[Tooltip("Hours the Home button stays after the popup.")]
	[Min(1)]
	public int hours; // 0x1C

	// Methods

	// RVA: 0x2268BA8 Offset: 0x2264BA8 VA: 0x2268BA8
	public void .ctor() { }
}

