// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventResourceSpend : TrackingEventResourceBase<TrackingEventResourceSpend> // TypeDefIndex: 12070
{
	// Fields
	private Nullable<TrackingEventResourceSpend.EReason> reason; // 0x50
	private Nullable<int> play_index; // 0x58
	private Nullable<float> progress; // 0x60

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x247AA68 Offset: 0x2476A68 VA: 0x247AA68 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247AAA8 Offset: 0x2476AA8 VA: 0x247AAA8 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x247AC00 Offset: 0x2476C00 VA: 0x247AC00
	public void .ctor(EResourceType resourceType, string resourceName, long resourceAmount) { }

	// RVA: 0x247AC70 Offset: 0x2476C70 VA: 0x247AC70
	public TrackingEventResourceSpend SetReason(Nullable<TrackingEventResourceSpend.EReason> value) { }

	// RVA: 0x247AC78 Offset: 0x2476C78 VA: 0x247AC78
	public TrackingEventResourceSpend SetPlayIndex(Nullable<int> value) { }

	// RVA: 0x247AC80 Offset: 0x2476C80 VA: 0x247AC80
	public TrackingEventResourceSpend SetProgress(Nullable<float> value) { }
}

