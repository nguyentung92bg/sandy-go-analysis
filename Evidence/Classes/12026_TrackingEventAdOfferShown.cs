// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventAdOfferShown : TrackingEventBase // TypeDefIndex: 12026
{
	// Fields
	private readonly string ad_format; // 0x18
	private readonly string placement; // 0x20

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x2477F98 Offset: 0x2473F98 VA: 0x2477F98 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2477FD8 Offset: 0x2473FD8 VA: 0x2477FD8 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x24781A4 Offset: 0x24741A4 VA: 0x24781A4
	public void .ctor(string adFormat, string placement) { }
}

