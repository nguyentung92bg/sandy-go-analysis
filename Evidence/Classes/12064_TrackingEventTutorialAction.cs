// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventTutorialAction : TrackingEventBase // TypeDefIndex: 12064
{
	// Fields
	private readonly string action_cate; // 0x18
	private readonly string action_name; // 0x20
	private Nullable<int> action_index; // 0x28

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x247A694 Offset: 0x2476694 VA: 0x247A694 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247A6D4 Offset: 0x24766D4 VA: 0x247A6D4 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x247A8C8 Offset: 0x24768C8 VA: 0x247A8C8
	public void .ctor(string actionCate, string actionName) { }

	// RVA: 0x247A90C Offset: 0x247690C VA: 0x247A90C
	public TrackingEventTutorialAction SetActionIndex(Nullable<int> value) { }
}

