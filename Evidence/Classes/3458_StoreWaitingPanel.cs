// Namespace: Dino.BusSand.App.UI
public class StoreWaitingPanel : UIPanel, IKitPanel // TypeDefIndex: 3458
{
	// Fields
	public const float OrderTimeoutSeconds = 45;
	public Action OnTimeout; // 0x38

	// Methods

	// RVA: 0x22BB180 Offset: 0x22B7180 VA: 0x22BB180 Slot: 4
	public override void OnOpen(object param) { }

	[IteratorStateMachine(typeof(StoreWaitingPanel.<Spin>d__3))]
	// RVA: 0x22BB718 Offset: 0x22B7718 VA: 0x22BB718
	private static IEnumerator Spin(RectTransform ring) { }

	[IteratorStateMachine(typeof(StoreWaitingPanel.<Timeout>d__4))]
	// RVA: 0x22BB784 Offset: 0x22B7784 VA: 0x22BB784
	private IEnumerator Timeout() { }

	// RVA: 0x22BB840 Offset: 0x22B7840 VA: 0x22BB840 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22BB848 Offset: 0x22B7848 VA: 0x22BB848
	public static StoreWaitingPanel Open() { }

	// RVA: 0x22BB980 Offset: 0x22B7980 VA: 0x22BB980
	public static void Hide() { }

	// RVA: 0x22BBA68 Offset: 0x22B7A68 VA: 0x22BBA68
	public void .ctor() { }
}

