// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventAdComplete : TrackingEventAdBase<TrackingEventAdComplete> // TypeDefIndex: 12023
{
	// Fields
	private Nullable<TrackingEventAdComplete.EEndType> end_type; // 0x40
	private Nullable<int> duration_ad; // 0x48

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x2477B54 Offset: 0x2473B54 VA: 0x2477B54 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2477B94 Offset: 0x2473B94 VA: 0x2477B94 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2477C58 Offset: 0x2473C58 VA: 0x2477C58
	public void .ctor(string adFormat, string placement) { }

	// RVA: 0x2477CB8 Offset: 0x2473CB8 VA: 0x2477CB8
	public TrackingEventAdComplete SetEndType(Nullable<TrackingEventAdComplete.EEndType> value) { }

	// RVA: 0x2477CC0 Offset: 0x2473CC0 VA: 0x2477CC0
	public TrackingEventAdComplete SetDurationAd(Nullable<int> value) { }
}

