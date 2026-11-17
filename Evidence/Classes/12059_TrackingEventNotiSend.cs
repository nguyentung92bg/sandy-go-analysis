// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventNotiSend : TrackingEventNotificationBase<TrackingEventNotiSend> // TypeDefIndex: 12059
{
	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x247A020 Offset: 0x2476020 VA: 0x247A020 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247A060 Offset: 0x2476060 VA: 0x247A060 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x247A0B8 Offset: 0x24760B8 VA: 0x247A0B8
	public void .ctor(string notiCate, string notiName) { }
}

