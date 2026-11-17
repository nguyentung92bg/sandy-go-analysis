// Namespace: Dino.BusSand.App.Meta
[Serializable]
public sealed class OfferPacingSettings // TypeDefIndex: 4157
{
	// Fields
	[Tooltip("No offer popup before this level.")]
	[Min(1)]
	public int fromLevel; // 0x10
	[Tooltip("Offer popups per Home arrival.")]
	[Min(0)]
	public int perArrival; // 0x14
	[Tooltip("Offer popups per day (offers inside the fail popup do not count).")]
	[Min(0)]
	public int perDay; // 0x18

	// Methods

	// RVA: 0x2268BEC Offset: 0x2264BEC VA: 0x2268BEC
	public void .ctor() { }
}

