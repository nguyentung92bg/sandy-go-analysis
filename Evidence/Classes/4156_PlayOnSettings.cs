// Namespace: Dino.BusSand.App.Meta
[Serializable]
public sealed class PlayOnSettings // TypeDefIndex: 4156
{
	// Fields
	public bool enabled; // 0x10
	[Tooltip("TbStoreItemConfig id (4301 = play_on).")]
	public int storeItem; // 0x14
	[Min(1)]
	public int fromLevel; // 0x18
	[Tooltip("Only while the coins cannot pay the next continue.")]
	public bool onlyWhenShort; // 0x1C

	// Methods

	// RVA: 0x2268BCC Offset: 0x2264BCC VA: 0x2268BCC
	public void .ctor() { }
}

