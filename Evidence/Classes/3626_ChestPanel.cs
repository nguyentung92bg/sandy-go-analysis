// Namespace: Dino.BusSand.App.UI
public class ChestPanel : RewardPopup // TypeDefIndex: 3626
{
	// Fields
	public const string PrefabKey = "UIWinChest2D";
	private Image _chest; // 0x58
	private RectTransform _rays; // 0x60
	private readonly List<ValueTuple<TextMeshProUGUI, KeyValuePair<int, long>>> _labels; // 0x68
	private Vector3 _from; // 0x70
	public const string ChestClosed = "icon_chest_lv5";
	public const string ChestOpen = "icon_chest_lv5_open";

	// Properties
	protected override string AdSlot { get; }
	protected override Vector3 FlyFrom { get; }

	// Methods

	// RVA: 0x2326104 Offset: 0x2322104 VA: 0x2326104 Slot: 11
	protected override string get_AdSlot() { }

	// RVA: 0x2326144 Offset: 0x2322144 VA: 0x2326144 Slot: 10
	protected override Vector3 get_FlyFrom() { }

	// RVA: 0x2326150 Offset: 0x2322150 VA: 0x2326150 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x2326BB4 Offset: 0x2322BB4 VA: 0x2326BB4
	private static CanvasGroup Group(Transform t) { }

	// RVA: 0x2326C28 Offset: 0x2322C28 VA: 0x2326C28
	private void Shake(RectTransform t) { }

	// RVA: 0x2326B08 Offset: 0x2322B08 VA: 0x2326B08
	private static Vector2 ChestSize(string key) { }

	// RVA: 0x2326E8C Offset: 0x2322E8C VA: 0x2326E8C
	private void Burst(RectTransform box, List<KeyValuePair<int, long>> rewards) { }

	// RVA: 0x2327760 Offset: 0x2323760 VA: 0x2327760 Slot: 9
	protected override List<KeyValuePair<int, long>> Grant(int times) { }

	// RVA: 0x232776C Offset: 0x232376C VA: 0x232776C Slot: 12
	protected override void OnGranted(List<KeyValuePair<int, long>> got, int times) { }

	// RVA: 0x2327784 Offset: 0x2323784 VA: 0x2327784
	public void .ctor() { }
}

