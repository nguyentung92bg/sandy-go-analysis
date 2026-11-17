// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventNotiReceive : TrackingEventNotificationBase<TrackingEventNotiReceive> // TypeDefIndex: 12058
{
	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x2479F28 Offset: 0x2475F28 VA: 0x2479F28 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2479F68 Offset: 0x2475F68 VA: 0x2479F68 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2479FC0 Offset: 0x2475FC0 VA: 0x2479FC0
	public void .ctor(string notiCate, string notiName) { }
}

