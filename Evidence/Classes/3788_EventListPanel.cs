// Namespace: Dino.BusSand.App.UI
public class EventListPanel : UIPanel, IKitPanel // TypeDefIndex: 3788
{
	// Fields
	public const string PrefabKey = "UIEvList2D";
	private const int MaxRows = 6;
	private const float RowH = 112;
	private EventView _v; // 0x38
	private RectTransform _box; // 0x40
	private RectTransform _rows; // 0x48
	private TextMeshProUGUI _header; // 0x50
	private TextMeshProUGUI _timer; // 0x58
	private KitTopBar _bar; // 0x60
	private bool _buying; // 0x68
	private bool _waiting; // 0x69
	private float _tick; // 0x6C

	// Methods

	// RVA: 0x21B5B80 Offset: 0x21B1B80 VA: 0x21B5B80 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21B6C04 Offset: 0x21B2C04 VA: 0x21B6C04
	private void Rebuild(bool entrance) { }

	// RVA: 0x21B7F5C Offset: 0x21B3F5C VA: 0x21B7F5C
	private void OnClaim(EventRow r, RectTransform from) { }

	// RVA: 0x21B8244 Offset: 0x21B4244 VA: 0x21B8244
	private void Update() { }

	// RVA: 0x21B8538 Offset: 0x21B4538 VA: 0x21B8538 Slot: 6
	public override void OnClose() { }

	// RVA: 0x21B8590 Offset: 0x21B4590 VA: 0x21B8590 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21B85B0 Offset: 0x21B45B0 VA: 0x21B85B0
	private void OnBuy(int item) { }

	// RVA: 0x21B8788 Offset: 0x21B4788 VA: 0x21B8788
	private void BuyDone(bool ok, bool timeout) { }

	// RVA: 0x21B88A4 Offset: 0x21B48A4 VA: 0x21B88A4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21B88AC Offset: 0x21B48AC VA: 0x21B88AC
	private void <OnClaim>b__13_0() { }

	[CompilerGenerated]
	// RVA: 0x21B896C Offset: 0x21B496C VA: 0x21B896C
	private void <OnBuy>b__18_0() { }

	[CompilerGenerated]
	// RVA: 0x21B8978 Offset: 0x21B4978 VA: 0x21B8978
	private void <OnBuy>b__18_1(bool ok) { }
}

