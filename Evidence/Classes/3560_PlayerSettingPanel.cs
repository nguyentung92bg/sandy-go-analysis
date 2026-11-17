// Namespace: Dino.BusSand.App.UI
public class PlayerSettingPanel : UIPanel // TypeDefIndex: 3560
{
	// Fields
	public const string PrefabKey = "UIPlayerSetting";
	private const int Columns = 3;
	private static readonly PlayerSettingPanel.GridSpec AvatarGrid; // 0x0
	private static readonly PlayerSettingPanel.GridSpec FrameGrid; // 0x18
	private static readonly PlayerSettingPanel.GridSpec NameGrid; // 0x30
	private static readonly Vector2 FrameLockTipsOffset; // 0x48
	private static readonly Vector2 NamePlateLockTipsOffset; // 0x50
	private const float LockTipsMaxWidth = 960;
	private const float NameItemFontSize = 36;
	private Action _onClose; // 0x38
	private bool _closing; // 0x40
	private List<int> _heads; // 0x48
	private List<int> _frames; // 0x50
	private List<int> _names; // 0x58
	private readonly List<PlayerSettingPanel.Item> _avatarItems; // 0x60
	private readonly List<PlayerSettingPanel.Item> _frameItems; // 0x68
	private readonly List<PlayerSettingPanel.Item> _nameItems; // 0x70
	private CommonHeadView _head; // 0x78
	private CommonNamePlateView _plate; // 0x80
	private Material _tabSelMat; // 0x88
	private Material _tabMat; // 0x90
	private Transform _lockTips; // 0x98
	private Transform _lockTxtRoot; // 0xA0
	private Transform _lockBg; // 0xA8
	private Transform _lockArrow; // 0xB0
	private Transform _contentRoot; // 0xB8
	private readonly Dictionary<string, GameObject> _lockTxt; // 0xC0
	private string _lockShown; // 0xC8
	private TMP_InputField _nameInput; // 0xD0
	public static bool AllowNameInput; // 0x58

	// Methods

	// RVA: 0x230020C Offset: 0x22FC20C VA: 0x230020C
	public static PlayerSettingPanel ShowPanel(PlayerSettingPanel.OpenInfo info) { }

	// RVA: 0x22FC3CC Offset: 0x22F83CC VA: 0x22FC3CC
	public static void ShowFromHall() { }

	// RVA: 0x23003F4 Offset: 0x22FC3F4 VA: 0x23003F4 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x23026CC Offset: 0x22FE6CC VA: 0x23026CC Slot: 6
	public override void OnClose() { }

	// RVA: 0x2302770 Offset: 0x22FE770 VA: 0x2302770 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x2302784 Offset: 0x22FE784 VA: 0x2302784
	private void OnCloseClick() { }

	// RVA: 0x23024EC Offset: 0x22FE4EC VA: 0x23024EC
	private void SelectTab(PlayerSettingPanel.SelectType t) { }

	// RVA: 0x2302934 Offset: 0x22FE934 VA: 0x2302934
	private void SetTab(string btn, string txt, string spritePrefix, bool on) { }

	// RVA: 0x2301154 Offset: 0x22FD154 VA: 0x2301154
	private Material TextMat(string node) { }

	// RVA: 0x2301324 Offset: 0x22FD324 VA: 0x2301324
	private void BuildGrid(string view, string template, List<int> ids, PlayerSettingPanel.GridSpec g, List<PlayerSettingPanel.Item> items, Action<PlayerSettingPanel.Item> setup) { }

	// RVA: 0x2302BA4 Offset: 0x22FEBA4 VA: 0x2302BA4
	private void SetupAvatarItem(PlayerSettingPanel.Item it) { }

	// RVA: 0x2302E28 Offset: 0x22FEE28 VA: 0x2302E28
	private void OnAvatarSelected(int headId) { }

	// RVA: 0x2303068 Offset: 0x22FF068 VA: 0x2303068
	private void SetupFrameItem(PlayerSettingPanel.Item it) { }

	// RVA: 0x230357C Offset: 0x22FF57C VA: 0x230357C
	private void OnFrameSelected(PlayerSettingPanel.Item it) { }

	// RVA: 0x2303CF8 Offset: 0x22FFCF8 VA: 0x2303CF8
	private void SetupNameItem(PlayerSettingPanel.Item it) { }

	// RVA: 0x2303ED8 Offset: 0x22FFED8 VA: 0x2303ED8
	private void OnNamePlateSelected(PlayerSettingPanel.Item it) { }

	// RVA: 0x2303248 Offset: 0x22FF248 VA: 0x2303248
	private void AttachDecorate(PlayerSettingPanel.Item it, bool plate) { }

	// RVA: 0x23041C4 Offset: 0x23001C4 VA: 0x23041C4
	private void OnAppearanceChanged(PlayerIdentity.Appearance a) { }

	// RVA: 0x2303868 Offset: 0x22FF868 VA: 0x2303868
	private void ShowLockTips(RectTransform target, string path, Vector2 offset) { }

	// RVA: 0x2304344 Offset: 0x2300344 VA: 0x2304344
	private static void LockTipTexts(Transform root) { }

	// RVA: 0x2304628 Offset: 0x2300628 VA: 0x2304628
	private void AdjustLockTips(RectTransform target, Vector2 offset) { }

	// RVA: 0x23028D8 Offset: 0x22FE8D8 VA: 0x23028D8
	private void HideLockTips() { }

	// RVA: 0x2304854 Offset: 0x2300854 VA: 0x2304854
	private void OnRandomBtnClick() { }

	// RVA: 0x2301A30 Offset: 0x22FDA30 VA: 0x2301A30
	private void SetupNameInput() { }

	// RVA: 0x2304A88 Offset: 0x2300A88 VA: 0x2304A88
	private void BeginNameEdit() { }

	// RVA: 0x2304BF8 Offset: 0x2300BF8 VA: 0x2304BF8
	private void OnNameEndEdit(string value) { }

	// RVA: 0x2302880 Offset: 0x22FE880 VA: 0x2302880
	private void CommitName(string value) { }

	// RVA: 0x2304968 Offset: 0x2300968 VA: 0x2304968
	private void EndNameEdit() { }

	// RVA: 0x230125C Offset: 0x22FD25C VA: 0x230125C
	private static void SetActive(Transform t, bool on) { }

	// RVA: 0x2301064 Offset: 0x22FD064 VA: 0x2301064
	private static void SetTexts(Transform node, string text) { }

	// RVA: 0x2304CAC Offset: 0x2300CAC VA: 0x2304CAC
	public void .ctor() { }

	// RVA: 0x2304DD0 Offset: 0x2300DD0 VA: 0x2304DD0
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x2304EA0 Offset: 0x2300EA0 VA: 0x2304EA0
	private void <OnOpen>b__36_0() { }

	[CompilerGenerated]
	// RVA: 0x2304EA8 Offset: 0x2300EA8 VA: 0x2304EA8
	private void <OnOpen>b__36_1() { }

	[CompilerGenerated]
	// RVA: 0x2304EB0 Offset: 0x2300EB0 VA: 0x2304EB0
	private void <OnOpen>b__36_2() { }
}

