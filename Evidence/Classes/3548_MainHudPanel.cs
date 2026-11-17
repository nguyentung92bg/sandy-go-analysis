// Namespace: Dino.BusSand.App.UI
public class MainHudPanel : UIPanel // TypeDefIndex: 3548
{
	// Fields
	private const int ActClimbTower = 2;
	private const int ActStreakRate = 3;
	private const int ActBattleRoyale = 4;
	private const int ActYacht = 5;
	private const int ActDailyBox = 11;
	private static readonly Dictionary<int, int> LockedShowLevels; // 0x0
	private static readonly Dictionary<int, int> DefaultUnlockLevels; // 0x8
	private const string ClickSfx = "sfx_common_button_scale_click";
	private const float CoinFlyTime = 1.1;
	private bool _fromGame; // 0x38
	private float _lastPlayClick; // 0x3C
	private GameObject _playBtn; // 0x40
	private TMP_Text _coinText; // 0x48
	private long _coinShown; // 0x50
	private bool _coinLocked; // 0x58
	private Coroutine _coinCo; // 0x60
	private Transform _heart; // 0x68
	private int _heartState; // 0x70
	private static readonly string[] ActivityStateNodes; // 0x10

	// Methods

	// RVA: 0x22F961C Offset: 0x22F561C VA: 0x22F961C Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22FB8E8 Offset: 0x22F78E8 VA: 0x22FB8E8 Slot: 6
	public override void OnClose() { }

	// RVA: 0x22FB98C Offset: 0x22F798C VA: 0x22FB98C Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22F9A04 Offset: 0x22F5A04 VA: 0x22F9A04
	private void SetupTopBar() { }

	// RVA: 0x22FB994 Offset: 0x22F7994 VA: 0x22FB994
	private static void DisableOpenClip(Transform t) { }

	// RVA: 0x22FBF7C Offset: 0x22F7F7C VA: 0x22FBF7C
	private void OnCoinClick() { }

	// RVA: 0x22FC0A4 Offset: 0x22F80A4 VA: 0x22FC0A4
	private void OnHeartClick() { }

	// RVA: 0x22FC22C Offset: 0x22F822C VA: 0x22FC22C
	private void OnSettingClick() { }

	// RVA: 0x22FC380 Offset: 0x22F8380 VA: 0x22FC380
	private void OnHeadClick() { }

	// RVA: 0x22FC6C4 Offset: 0x22F86C4 VA: 0x22FC6C4
	private void OnItemChanged(int id) { }

	// RVA: 0x22FC804 Offset: 0x22F8804 VA: 0x22FC804
	public static string ChangeNumToKM(long num) { }

	// RVA: 0x22FBAD4 Offset: 0x22F7AD4 VA: 0x22FBAD4
	private void SetCoins(long v) { }

	// RVA: 0x22FC75C Offset: 0x22F875C VA: 0x22FC75C
	private void AnimateCoins(long target) { }

	[IteratorStateMachine(typeof(MainHudPanel.<CountCoins>d__31))]
	// RVA: 0x22FC910 Offset: 0x22F8910 VA: 0x22FC910
	private IEnumerator CountCoins(long from, long to, float duration) { }

	[IteratorStateMachine(typeof(MainHudPanel.<WinRewardCountUp>d__32))]
	// RVA: 0x22FB86C Offset: 0x22F786C VA: 0x22FB86C
	private IEnumerator WinRewardCountUp(int reward) { }

	// RVA: 0x22FC9F0 Offset: 0x22F89F0 VA: 0x22FC9F0
	private void FinishPendingReward() { }

	[IteratorStateMachine(typeof(MainHudPanel.<Punch>d__34))]
	// RVA: 0x22FCA68 Offset: 0x22F8A68 VA: 0x22FCA68
	private static IEnumerator Punch(Transform t, float scale, float duration) { }

	// RVA: 0x22FBC98 Offset: 0x22F7C98 VA: 0x22FBC98
	private void RefreshHearts() { }

	// RVA: 0x22FCBD8 Offset: 0x22F8BD8 VA: 0x22FCBD8
	private void RefreshHeartTime() { }

	[IteratorStateMachine(typeof(MainHudPanel.<HeartTimer>d__37))]
	// RVA: 0x22FB764 Offset: 0x22F7764 VA: 0x22FB764
	private IEnumerator HeartTimer() { }

	// RVA: 0x22FCDF0 Offset: 0x22F8DF0 VA: 0x22FCDF0
	public static string TimeString(long seconds) { }

	// RVA: 0x22F9FB4 Offset: 0x22F5FB4 VA: 0x22F9FB4
	private void SetupPlayButton() { }

	// RVA: 0x22FD044 Offset: 0x22F9044 VA: 0x22FD044
	private void OnPlayClick() { }

	// RVA: 0x22FA77C Offset: 0x22F677C VA: 0x22FA77C
	private void SetupRightColumn() { }

	// RVA: 0x22FADF8 Offset: 0x22F6DF8 VA: 0x22FADF8
	private void SetupLeftColumn() { }

	// RVA: 0x22FD19C Offset: 0x22F919C VA: 0x22FD19C
	private void SetupActivity(string node, int act, string lockToastKey) { }

	// RVA: 0x22FDB48 Offset: 0x22F9B48 VA: 0x22FDB48
	private static int UnlockLevel(int act) { }

	// RVA: 0x22FDC8C Offset: 0x22F9C8C VA: 0x22FDC8C
	private static bool ShouldShowLocked(int act, int level, int unlock) { }

	// RVA: 0x22FAF44 Offset: 0x22F6F44 VA: 0x22FAF44
	private void SetupStreakRate() { }

	// RVA: 0x22FDDC4 Offset: 0x22F9DC4 VA: 0x22FDDC4
	private static void Toast(string langKey) { }

	// RVA: 0x22FDEC4 Offset: 0x22F9EC4 VA: 0x22FDEC4
	private static void ToastText(string text) { }

	// RVA: 0x22FCB10 Offset: 0x22F8B10 VA: 0x22FCB10
	private static void SetActive(Transform t, bool on) { }

	// RVA: 0x22FBBA8 Offset: 0x22F7BA8 VA: 0x22FBBA8
	private static void SetTexts(Transform node, string text) { }

	[IteratorStateMachine(typeof(MainHudPanel.<AnimLoop>d__52))]
	// RVA: 0x22FB7D0 Offset: 0x22F77D0 VA: 0x22FB7D0
	private static IEnumerator AnimLoop(Animation anim, string clip, float initialDelay, float interval) { }

	// RVA: 0x22FDD5C Offset: 0x22F9D5C VA: 0x22FDD5C
	private static void SampleFirst(Animation anim, string clip) { }

	// RVA: 0x22FCFDC Offset: 0x22F8FDC VA: 0x22FCFDC
	private static void SampleLast(Animation anim, string clip) { }

	// RVA: 0x22FE068 Offset: 0x22FA068 VA: 0x22FE068
	private static void Sample(Animation anim, string clip, bool last) { }

	// RVA: 0x22FE498 Offset: 0x22FA498 VA: 0x22FE498
	public void .ctor() { }

	// RVA: 0x22FE4B0 Offset: 0x22FA4B0 VA: 0x22FE4B0
	private static void .cctor() { }
}

