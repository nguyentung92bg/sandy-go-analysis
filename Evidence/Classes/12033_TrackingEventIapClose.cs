// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventIapClose : TrackingEventIapBase<TrackingEventIapClose> // TypeDefIndex: 12033
{
	// Fields
	private string pack_name; // 0x30
	private Nullable<int> duration_iap; // 0x38

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x24786A4 Offset: 0x24746A4 VA: 0x24786A4 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x24786E4 Offset: 0x24746E4 VA: 0x24786E4 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2478794 Offset: 0x2474794 VA: 0x2478794
	public void .ctor(string placement) { }

	// RVA: 0x24787EC Offset: 0x24747EC VA: 0x24787EC
	public TrackingEventIapClose SetPackName(string value) { }

	// RVA: 0x2478808 Offset: 0x2474808 VA: 0x2478808
	public TrackingEventIapClose SetDurationIap(Nullable<int> value) { }
}

