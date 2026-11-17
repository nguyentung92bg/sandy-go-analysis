// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventResourceEarn : TrackingEventResourceBase<TrackingEventResourceEarn> // TypeDefIndex: 12068
{
	// Fields
	private Nullable<TrackingEventResourceEarn.EReason> reason; // 0x50

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x247A914 Offset: 0x2476914 VA: 0x247A914 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247A954 Offset: 0x2476954 VA: 0x247A954 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x247A9F0 Offset: 0x24769F0 VA: 0x247A9F0
	public void .ctor(EResourceType resourceType, string resourceName, long resourceAmount) { }

	// RVA: 0x247AA60 Offset: 0x2476A60 VA: 0x247AA60
	public TrackingEventResourceEarn SetReason(Nullable<TrackingEventResourceEarn.EReason> value) { }
}

