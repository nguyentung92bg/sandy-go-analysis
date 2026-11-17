// Namespace: Dino.BusSand.App.UI
public class YachtRacingPanel : UIPanel // TypeDefIndex: 3911
{
	// Fields
	private const string ClaimTipsKey = "UI_Racing_Tap_Open";
	private const float DesignHeight = 1920;
	private const float DesignBackTop = 788;
	private const float DesignWaterPosY = -503.5;
	private static readonly Vector2 TrophyTipsOffset; // 0x0
	private static readonly string[] RowNodes; // 0x8
	private YachtRacingPanel.Param _p; // 0x38
	private YachtRacingCore _c; // 0x40
	private int _stage; // 0x48
	private readonly List<YachtRacingTrackRow> _rows; // 0x50
	private YachtRacingRewardTips _tips; // 0x58
	private RectTransform _root; // 0x60
	private RectTransform _back; // 0x68
	private RectTransform _top; // 0x70
	private RectTransform _front; // 0x78
	private RectTransform _racingRoot; // 0x80
	private RectTransform _trophy; // 0x88
	private bool _canClickClaim; // 0x90
	private bool _playingClaim; // 0x91
	private bool _flowDone; // 0x92
	private bool _timerOn; // 0x93
	private bool _subscribed; // 0x94
	private Coroutine _bounce; // 0x98

	// Properties
	public bool Special { get; }

	// Methods

	// RVA: 0x21EAD54 Offset: 0x21E6D54 VA: 0x21EAD54
	public bool get_Special() { }

	// RVA: 0x21EAD74 Offset: 0x21E6D74 VA: 0x21EAD74 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21EB80C Offset: 0x21E780C VA: 0x21EB80C
	private void AddListeners() { }

	// RVA: 0x21EC110 Offset: 0x21E8110 VA: 0x21EC110 Slot: 6
	public override void OnClose() { }

	// RVA: 0x21EC238 Offset: 0x21E8238 VA: 0x21EC238 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21EBB1C Offset: 0x21E7B1C VA: 0x21EBB1C
	private void AdaptBackTop() { }

	// RVA: 0x21EBCC0 Offset: 0x21E7CC0 VA: 0x21EBCC0
	private void InitUI() { }

	// RVA: 0x21EC2B4 Offset: 0x21E82B4 VA: 0x21EC2B4
	private void RefreshStage() { }

	[IteratorStateMachine(typeof(YachtRacingPanel.<ShowTrophyTipsNextFrame>d__33))]
	// RVA: 0x21ED018 Offset: 0x21E9018 VA: 0x21ED018
	private IEnumerator ShowTrophyTipsNextFrame() { }

	// RVA: 0x21EC7C0 Offset: 0x21E87C0 VA: 0x21EC7C0
	private void RefreshFlagContent() { }

	[IteratorStateMachine(typeof(YachtRacingPanel.<CountDownLoop>d__35))]
	// RVA: 0x21ECB9C Offset: 0x21E8B9C VA: 0x21ECB9C
	private IEnumerator CountDownLoop() { }

	// RVA: 0x21ECA38 Offset: 0x21E8A38 VA: 0x21ECA38
	private void CountDownTime() { }

	// RVA: 0x21ECC08 Offset: 0x21E8C08 VA: 0x21ECC08
	private void InitTrackItems() { }

	[IteratorStateMachine(typeof(YachtRacingPanel.<ForceActiveBot>d__38))]
	// RVA: 0x21ED2F8 Offset: 0x21E92F8 VA: 0x21ED2F8
	private IEnumerator ForceActiveBot() { }

	// RVA: 0x21ED0D4 Offset: 0x21E90D4 VA: 0x21ED0D4
	private void OnBotsUpdated() { }

	// RVA: 0x21ED38C Offset: 0x21E938C VA: 0x21ED38C
	private void ShowRewardTips(RectTransform clickTarget, Vector2 offset) { }

	// RVA: 0x21ED8F0 Offset: 0x21E98F0 VA: 0x21ED8F0
	private void OnClickTrophy() { }

	// RVA: 0x21ED958 Offset: 0x21E9958 VA: 0x21ED958
	private void OnTipsClick() { }

	// RVA: 0x21ED964 Offset: 0x21E9964 VA: 0x21ED964
	private void PlayClaimAnim() { }

	[IteratorStateMachine(typeof(YachtRacingPanel.<ClaimAnim>d__44))]
	// RVA: 0x21EDA68 Offset: 0x21E9A68 VA: 0x21EDA68
	private IEnumerator ClaimAnim() { }

	// RVA: 0x21EDAFC Offset: 0x21E9AFC VA: 0x21EDAFC
	private static void SetLocalY(Transform t, Vector3 from, float toY, float k) { }

	// RVA: 0x21EDB1C Offset: 0x21E9B1C VA: 0x21EDB1C
	private void OnClaimAnimComplete() { }

	// RVA: 0x21EDD20 Offset: 0x21E9D20 VA: 0x21EDD20
	private void StartBounceLoop() { }

	// RVA: 0x21EDD6C Offset: 0x21E9D6C VA: 0x21EDD6C
	private void StopBounceLoop() { }

	[IteratorStateMachine(typeof(YachtRacingPanel.<BounceSoundLoop>d__49))]
	// RVA: 0x21EDD98 Offset: 0x21E9D98 VA: 0x21EDD98
	private IEnumerator BounceSoundLoop() { }

	// RVA: 0x21EDE18 Offset: 0x21E9E18 VA: 0x21EDE18
	private void OnClickBg() { }

	// RVA: 0x21EC24C Offset: 0x21E824C VA: 0x21EC24C
	private void OnClickClose() { }

	// RVA: 0x21EDFB0 Offset: 0x21E9FB0 VA: 0x21EDFB0
	private void CloseView() { }

	// RVA: 0x21EE0C0 Offset: 0x21EA0C0 VA: 0x21EE0C0
	public void .ctor() { }

	// RVA: 0x21EE14C Offset: 0x21EA14C VA: 0x21EE14C
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x21EE2D8 Offset: 0x21EA2D8 VA: 0x21EE2D8
	private void <OnClickBg>b__50_0() { }
}

