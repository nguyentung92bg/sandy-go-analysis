// Namespace: Dino.BusSand.App.UI
public class HomePanel : UIPanel, IKitPanel // TypeDefIndex: 3530
{
	// Fields
	public const string PrefabKey = "UIHome2D";
	private RectTransform _levelBtn; // 0x38
	private RectTransform _bg; // 0x40
	public const string Picture = "bg_home";
	private const float Full = 0.9892578;
	private const float PicX = -511.56934;
	private const float PicY = -8.192383;
	private const float PicW = 1973.5693;
	private const float PicH = 2356.412;
	private static readonly Vector2 ButtonCentre; // 0x0
	private int _shownLevel; // 0x48
	private bool _entered; // 0x4C
	private HomeAtelier _atelier; // 0x50
	private HomeStage _stage; // 0x58
	private bool _leaving; // 0x60
	private RectTransform _nav; // 0x68
	private RectTransform _slot; // 0x70
	private KitHeightFit _fit; // 0x78
	private static readonly Vector2 LevelButtonSize; // 0x8
	private const float LevelRim = 1;
	private const float NavClear = 384;
	private const bool ShowAvatar = False;
	private RectTransform _noAds; // 0x80
	private RectTransform _ws; // 0x88
	private RectTransform _wsFill; // 0x90
	private RectTransform _wsBadge; // 0x98
	private TextMeshProUGUI _wsLabel; // 0xA0
	private TextMeshProUGUI _wsBadgeText; // 0xA8
	private WinStreak.Phase _wsPhase; // 0xB0
	private float _wsNext; // 0xB4
	private bool _wsPlusQueued; // 0xB8
	private readonly List<HomeSideButton> _side; // 0xC0
	private const float ColumnTop = -564;
	private const float ColumnStep = 256.5;
	private float _pollAt; // 0xC8
	private bool _wsLaidOut; // 0xCC

	// Properties
	public RectTransform LevelButton { get; }
	public bool AtelierBusy { get; }

	// Methods

	// RVA: 0x22E8FAC Offset: 0x22E4FAC VA: 0x22E8FAC
	public RectTransform get_LevelButton() { }

	// RVA: 0x22E8FB4 Offset: 0x22E4FB4 VA: 0x22E8FB4
	public bool get_AtelierBusy() { }

	// RVA: 0x22E904C Offset: 0x22E504C VA: 0x22E904C Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22EB0EC Offset: 0x22E70EC VA: 0x22EB0EC Slot: 6
	public override void OnClose() { }

	// RVA: 0x22EB1B4 Offset: 0x22E71B4 VA: 0x22EB1B4
	public void ShowNav(bool on) { }

	// RVA: 0x22EB108 Offset: 0x22E7108 VA: 0x22EB108
	private void DropStage() { }

	// RVA: 0x22EAFC0 Offset: 0x22E6FC0 VA: 0x22EAFC0
	public void Homecoming(int won) { }

	// RVA: 0x22EB284 Offset: 0x22E7284 VA: 0x22EB284
	private void Play() { }

	// RVA: 0x22EB580 Offset: 0x22E7580 VA: 0x22EB580
	public void Rebuild() { }

	// RVA: 0x22E9784 Offset: 0x22E5784 VA: 0x22E9784
	private void BuildBackground() { }

	// RVA: 0x22EBCDC Offset: 0x22E7CDC VA: 0x22EBCDC
	private void LateUpdate() { }

	// RVA: 0x22EA830 Offset: 0x22E6830 VA: 0x22EA830
	public void Refresh() { }

	// RVA: 0x22EA000 Offset: 0x22E6000 VA: 0x22EA000
	private void BuildWinStreak() { }

	// RVA: 0x22EBFAC Offset: 0x22E7FAC VA: 0x22EBFAC
	private void RefreshWinStreak(bool force) { }

	// RVA: 0x22EC494 Offset: 0x22E8494 VA: 0x22EC494
	private void SetWinStreakBar(float k) { }

	// RVA: 0x22EC55C Offset: 0x22E855C VA: 0x22EC55C
	private void PlayWinStreakPlus() { }

	// RVA: 0x22ECB9C Offset: 0x22E8B9C VA: 0x22ECB9C
	private void OnWinStreak() { }

	// RVA: 0x22E9CC4 Offset: 0x22E5CC4 VA: 0x22E9CC4
	private void BuildRemoveAds() { }

	// RVA: 0x22EA48C Offset: 0x22E648C VA: 0x22EA48C
	private void BuildSideButtons() { }

	// RVA: 0x22ECE0C Offset: 0x22E8E0C VA: 0x22ECE0C
	private void Layout(bool entrance) { }

	// RVA: 0x22ED234 Offset: 0x22E9234 VA: 0x22ED234
	private void Update() { }

	// RVA: 0x22ED5AC Offset: 0x22E95AC VA: 0x22ED5AC
	private static void OpenShop() { }

	// RVA: 0x22ED644 Offset: 0x22E9644 VA: 0x22ED644
	private void OnHeart() { }

	// RVA: 0x22ED880 Offset: 0x22E9880 VA: 0x22ED880
	private void OnSettings() { }

	// RVA: 0x22ED974 Offset: 0x22E9974 VA: 0x22ED974
	public void .ctor() { }

	// RVA: 0x22EDA04 Offset: 0x22E9A04 VA: 0x22EDA04
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x22EDAA0 Offset: 0x22E9AA0 VA: 0x22EDAA0
	private void <OnOpen>b__19_0() { }

	[CompilerGenerated]
	// RVA: 0x22EDBC8 Offset: 0x22E9BC8 VA: 0x22EDBC8
	private Nullable<Vector3> <OnOpen>b__19_1() { }

	[CompilerGenerated]
	// RVA: 0x22EDCC0 Offset: 0x22E9CC0 VA: 0x22EDCC0
	private void <Play>b__25_0() { }

	[CompilerGenerated]
	// RVA: 0x22EDE40 Offset: 0x22E9E40 VA: 0x22EDE40
	private void <Play>b__25_1() { }

	[CompilerGenerated]
	// RVA: 0x22EDF78 Offset: 0x22E9F78 VA: 0x22EDF78
	private void <RefreshWinStreak>b__46_0() { }
}

