// Namespace: Dino.BusSand.App.UI
public class HudPanel : UIPanel, IKitPanel // TypeDefIndex: 3572
{
	// Fields
	private readonly List<HudPanel.ItemBtn> _items; // 0x38
	private GameplayController _gc; // 0x40
	private int _activeItem; // 0x48
	private bool _activeFree; // 0x4C
	private GameObject _itemMask; // 0x50
	private RectTransform _root; // 0x58
	private RectTransform _bar; // 0x60
	private RectTransform _tab; // 0x68
	private RectTransform _counter; // 0x70
	private RectTransform _tabHolder; // 0x78
	private RectTransform _rescue; // 0x80
	private TextMeshProUGUI _levelText; // 0x88
	private TextMeshProUGUI _counterText; // 0x90
	private readonly List<Image> _pips; // 0x98
	private Image _gear; // 0xA0
	private int _shownLevel; // 0xA8
	private int _shownRoad; // 0xAC
	private int _shownCap; // 0xB0
	private const float RowY = 160;
	private const float ButtonSize = 192;
	private const float Step = 236;
	private const float FirstX = -354;
	public const float BoosterRowTop = 256;
	private Canvas _world; // 0xB8
	private RectTransform _tagRoot; // 0xC0
	private RectTransform _counterRoot; // 0xC8
	private StageLayout _placedFor; // 0xD0
	private Vector2Int _placedScreen; // 0xD8
	private const float TabLift = 0.25;
	public const string WorldKey = "HudWorldTags";
	private CanvasGroup[] _tagGroups; // 0xE0
	private CanvasGroup _topBarGroup; // 0xE8
	private float _tagAlpha; // 0xF0
	private RectTransform _row; // 0xF8
	private RectTransform _topBar; // 0x100
	private CanvasGroup _shadeGroup; // 0x108
	private const float TopBarY = -84;
	private Canvas _rootCanvas; // 0x110
	private RescueTimerWidget _rescueWidget; // 0x118
	private RectTransform _coinPill; // 0x120
	private static readonly Vector3[] s_corners; // 0x0
	private const float TabOnFrame = 0.5;
	private const float RescueScale = 0.8;
	private const float RescueGap = 22;
	private const float TabRaise = 22;
	[CompilerGenerated]
	private static float <TabBottomScreenY>k__BackingField; // 0x8
	private static readonly Color CounterCalm; // 0xC
	private static readonly Color CounterWarn; // 0x1C
	private static readonly Color CounterFull; // 0x2C
	private const string BuyPauseOwner = "BoosterBuy";
	[CompilerGenerated]
	private Action<int> ItemApplied; // 0x128
	private bool _itemMaskOn; // 0x130
	private GuideDimHoles _itemDim; // 0x138

	// Properties
	public bool DropdownOpen { get; }
	public Transform WorldTags { get; }
	public RectTransform RescueRect { get; }
	private static int FirstBoosterLevel { get; }
	public static bool FooterShown { get; }
	public static float TabBottomScreenY { get; set; }
	private bool BoosterBusy { get; }

	// Methods

	// RVA: 0x23078CC Offset: 0x23038CC VA: 0x23078CC
	public bool get_DropdownOpen() { }

	// RVA: 0x23079B8 Offset: 0x23039B8 VA: 0x23079B8 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x2309C74 Offset: 0x2305C74 VA: 0x2309C74 Slot: 6
	public override void OnClose() { }

	// RVA: 0x2309E54 Offset: 0x2305E54 VA: 0x2309E54 Slot: 8
	protected override void OnDestroy() { }

	// RVA: 0x2309F08 Offset: 0x2305F08 VA: 0x2309F08
	private void OnEnable() { }

	// RVA: 0x2309FA4 Offset: 0x2305FA4 VA: 0x2309FA4
	private void OnDisable() { }

	// RVA: 0x230A038 Offset: 0x2306038 VA: 0x230A038
	public Transform Find(string nameOrPath) { }

	// RVA: 0x230A180 Offset: 0x2306180 VA: 0x230A180
	public void ResetForLevel() { }

	// RVA: 0x230A464 Offset: 0x2306464 VA: 0x230A464
	private void PlayIntro() { }

	// RVA: 0x230A820 Offset: 0x2306820 VA: 0x230A820
	public Transform get_WorldTags() { }

	// RVA: 0x2307EF8 Offset: 0x2303EF8 VA: 0x2307EF8
	private KitAdopt.Scope BuildWorld() { }

	// RVA: 0x230A8A8 Offset: 0x23068A8 VA: 0x230A8A8
	private void PlaceWorldTags() { }

	// RVA: 0x23082EC Offset: 0x23042EC VA: 0x23082EC
	private void BuildTop() { }

	// RVA: 0x230B07C Offset: 0x230707C VA: 0x230B07C
	private void FadeTagUnderTopBar() { }

	// RVA: 0x2308640 Offset: 0x2304640 VA: 0x2308640
	private void BuildCounter() { }

	// RVA: 0x230892C Offset: 0x230492C VA: 0x230892C
	private void BuildBar() { }

	// RVA: 0x230B7B4 Offset: 0x23077B4 VA: 0x230B7B4
	public RectTransform get_RescueRect() { }

	// RVA: 0x230B854 Offset: 0x2307854 VA: 0x230B854
	private static int get_FirstBoosterLevel() { }

	// RVA: 0x230B8D8 Offset: 0x23078D8 VA: 0x230B8D8
	public static bool get_FooterShown() { }

	// RVA: 0x230B4DC Offset: 0x23074DC VA: 0x230B4DC
	private void AddItem(RectTransform row, int id, string node, string icon, int i) { }

	// RVA: 0x23094E8 Offset: 0x23054E8 VA: 0x23094E8
	private void ApplyTier() { }

	// RVA: 0x230B974 Offset: 0x2307974 VA: 0x230B974
	private void LateUpdate() { }

	// RVA: 0x230BD14 Offset: 0x2307D14 VA: 0x230BD14
	private void PlaceTab() { }

	// RVA: 0x230D13C Offset: 0x230913C VA: 0x230D13C
	private bool CoinPillOverlaps(Vector2 centre, Vector2 size) { }

	[CompilerGenerated]
	// RVA: 0x230D39C Offset: 0x230939C VA: 0x230D39C
	public static float get_TabBottomScreenY() { }

	[CompilerGenerated]
	// RVA: 0x230D3F4 Offset: 0x23093F4 VA: 0x230D3F4
	private static void set_TabBottomScreenY(float value) { }

	// RVA: 0x230CA0C Offset: 0x2308A0C VA: 0x230CA0C
	private void CounterBeat(int prev, int road, int cap) { }

	// RVA: 0x230CBB8 Offset: 0x2308BB8 VA: 0x230CBB8
	private void CapacityBeat(int oldCap, int cap) { }

	// RVA: 0x230CE78 Offset: 0x2308E78 VA: 0x230CE78
	private void CounterTension(int road, int cap) { }

	// RVA: 0x230C624 Offset: 0x2308624 VA: 0x230C624
	private void BuildPips(int cap) { }

	// RVA: 0x23090A0 Offset: 0x23050A0 VA: 0x23090A0
	private void BuildRescueTimer() { }

	// RVA: 0x230D458 Offset: 0x2309458 VA: 0x230D458
	private void OnItemChanged(int id) { }

	// RVA: 0x230D45C Offset: 0x230945C VA: 0x230D45C
	private HudPanel.ItemState StateOf(int id) { }

	// RVA: 0x230991C Offset: 0x230591C VA: 0x230991C
	public void RefreshItems() { }

	// RVA: 0x230D5A4 Offset: 0x23095A4 VA: 0x230D5A4
	private bool get_BoosterBusy() { }

	// RVA: 0x230D664 Offset: 0x2309664 VA: 0x230D664
	public bool CanPressItem(int id) { }

	// RVA: 0x230D830 Offset: 0x2309830 VA: 0x230D830
	public bool PressItem(int id) { }

	// RVA: 0x230D99C Offset: 0x230999C VA: 0x230D99C
	private void OnItemClick(HudPanel.ItemBtn it) { }

	// RVA: 0x230DC68 Offset: 0x2309C68 VA: 0x230DC68
	private void OpenBuyPopup(HudPanel.ItemBtn it) { }

	// RVA: 0x230DE38 Offset: 0x2309E38 VA: 0x230DE38
	private void UseItem(int id, bool free) { }

	// RVA: 0x230E598 Offset: 0x230A598 VA: 0x230E598
	private string ItemFailText(string reason) { }

	// RVA: 0x230EDDC Offset: 0x230ADDC VA: 0x230EDDC
	private float PictureHeight() { }

	[CompilerGenerated]
	// RVA: 0x230EEF4 Offset: 0x230AEF4 VA: 0x230EEF4
	public void add_ItemApplied(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x230EFA4 Offset: 0x230AFA4 VA: 0x230EFA4
	public void remove_ItemApplied(Action<int> value) { }

	// RVA: 0x230F054 Offset: 0x230B054 VA: 0x230F054
	private void OnItemConsumed(int id) { }

	// RVA: 0x230E91C Offset: 0x230A91C VA: 0x230E91C
	private void Consume(int id) { }

	// RVA: 0x230F0BC Offset: 0x230B0BC VA: 0x230F0BC
	private void MarkFreeUsed(int id) { }

	// RVA: 0x230DC30 Offset: 0x2309C30 VA: 0x230DC30
	private void CancelActive() { }

	// RVA: 0x230F160 Offset: 0x230B160 VA: 0x230F160
	private void OnState(PlayState s) { }

	// RVA: 0x230ECD4 Offset: 0x230ACD4 VA: 0x230ECD4
	private static void PlayBump(Transform t) { }

	// RVA: 0x230A1B4 Offset: 0x23061B4 VA: 0x230A1B4
	private void ShowItemMask(bool on) { }

	// RVA: 0x230C3F0 Offset: 0x23083F0 VA: 0x230C3F0
	private void UpdateItemMask() { }

	[IteratorStateMachine(typeof(HudPanel.<ItemTargets>d__114))]
	// RVA: 0x230F190 Offset: 0x230B190 VA: 0x230F190
	private IEnumerable<Transform> ItemTargets() { }

	// RVA: 0x230F244 Offset: 0x230B244 VA: 0x230F244
	private void OpenDropdown() { }

	// RVA: 0x230A37C Offset: 0x230637C VA: 0x230A37C
	public void CloseDropdown() { }

	// RVA: 0x230F354 Offset: 0x230B354 VA: 0x230F354 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x230E450 Offset: 0x230A450 VA: 0x230E450
	public RectTransform ItemRect(int id) { }

	// RVA: 0x230F3F8 Offset: 0x230B3F8 VA: 0x230F3F8
	public void .ctor() { }

	// RVA: 0x230F4EC Offset: 0x230B4EC VA: 0x230F4EC
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x230AF4C Offset: 0x2306F4C VA: 0x230AF4C
	internal static float <PlaceWorldTags>g__Px|44_0(Vector3 a, Vector3 b, ref HudPanel.<>c__DisplayClass44_0 ) { }

	[CompilerGenerated]
	// RVA: 0x230F5A0 Offset: 0x230B5A0 VA: 0x230F5A0
	private void <OpenBuyPopup>b__97_0(bool ok) { }
}

