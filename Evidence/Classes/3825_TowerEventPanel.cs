// Namespace: Dino.BusSand.App.UI
public class TowerEventPanel : UIPanel, IKitPanel // TypeDefIndex: 3825
{
	// Fields
	public const string PrefabKey = "UIEvTower2D";
	private const float RowTop = 250;
	private const float RowStep = 98;
	private const float RailX = -330;
	private ClimbTowerFeature _f; // 0x38
	private KitTopBar _bar; // 0x40
	private RectTransform _box; // 0x48
	private RectTransform _bus; // 0x50
	private TextMeshProUGUI _timer; // 0x58
	private TextMeshProUGUI _floor; // 0x60
	private int[] _wp; // 0x68
	private readonly List<Image> _chests; // 0x70
	private bool _busy; // 0x78
	private float _tick; // 0x7C

	// Methods

	// RVA: 0x21C4DA4 Offset: 0x21C0DA4 VA: 0x21C4DA4
	private float RowY(int i) { }

	// RVA: 0x21C4DE0 Offset: 0x21C0DE0 VA: 0x21C4DE0 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21C5910 Offset: 0x21C1910 VA: 0x21C5910
	private void BuildRow(int i) { }

	// RVA: 0x21C6014 Offset: 0x21C2014 VA: 0x21C6014
	private void Refresh() { }

	// RVA: 0x21C64B8 Offset: 0x21C24B8 VA: 0x21C64B8
	private float FloorY(float floor) { }

	// RVA: 0x21C5F50 Offset: 0x21C1F50 VA: 0x21C5F50
	private void PlaceBus(float floor) { }

	[IteratorStateMachine(typeof(TowerEventPanel.<Move>d__19))]
	// RVA: 0x21C6430 Offset: 0x21C2430 VA: 0x21C6430
	private IEnumerator Move(int from, int to) { }

	// RVA: 0x21C6654 Offset: 0x21C2654 VA: 0x21C6654
	private void OnChest(int wp, Image chest) { }

	// RVA: 0x21C69A0 Offset: 0x21C29A0 VA: 0x21C69A0
	private void Update() { }

	// RVA: 0x21C6BA4 Offset: 0x21C2BA4 VA: 0x21C6BA4
	private void OnOk() { }

	// RVA: 0x21C6DE8 Offset: 0x21C2DE8 VA: 0x21C6DE8 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21C6E08 Offset: 0x21C2E08 VA: 0x21C6E08
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21C6E90 Offset: 0x21C2E90 VA: 0x21C6E90
	private void <OnOpen>b__14_0() { }

	[CompilerGenerated]
	// RVA: 0x21C6EA4 Offset: 0x21C2EA4 VA: 0x21C6EA4
	private void <OnChest>b__20_0() { }
}

