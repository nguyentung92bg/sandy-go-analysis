// Namespace: Dino.BusSand.App.Meta
public static class JourneyTracking // TypeDefIndex: 3993
{
	// Fields
	private static readonly LevelJourney s_level; // 0x0
	private static readonly UiJourney s_ui; // 0x8
	private static StageEngine s_engine; // 0x10
	private static readonly int[] s_inbound; // 0x18
	private static int s_inboundCount; // 0x20
	private static int s_reviveMethod; // 0x24
	private static int s_lastHint; // 0x28
	private static int s_opsAtHint; // 0x2C
	private static int s_opsBeforeSnapshot; // 0x30
	private static int s_opsAtSnapshot; // 0x34
	private static bool s_auto; // 0x38

	// Properties
	public static long NowMs { get; }
	public static LevelJourney Level { get; }
	public static UiJourney Ui { get; }
	private static bool UiOn { get; }

	// Methods

	// RVA: 0x221B2F8 Offset: 0x22172F8 VA: 0x221B2F8
	public static long get_NowMs() { }

	// RVA: 0x221B330 Offset: 0x2217330 VA: 0x221B330
	private static bool Recording(StageEngine e) { }

	// RVA: 0x221B3C8 Offset: 0x22173C8 VA: 0x221B3C8
	public static LevelJourney get_Level() { }

	// RVA: 0x221B420 Offset: 0x2217420 VA: 0x221B420
	public static UiJourney get_Ui() { }

	// RVA: 0x221B478 Offset: 0x2217478 VA: 0x221B478
	private static void Log(Exception e) { }

	// RVA: 0x221AFD4 Offset: 0x2216FD4 VA: 0x221AFD4
	public static string DeviceTier() { }

	[RuntimeInitializeOnLoadMethod(0)]
	// RVA: 0x221B4D0 Offset: 0x22174D0 VA: 0x221B4D0
	public static void Hook() { }

	// RVA: 0x221B804 Offset: 0x2217804 VA: 0x221B804
	private static void OnQuitting() { }

	// RVA: 0x22146C4 Offset: 0x22106C4 VA: 0x22146C4
	public static void OnBoot() { }

	// RVA: 0x221BA70 Offset: 0x2217A70 VA: 0x221BA70
	public static void WrapInbound(StageEngine e) { }

	// RVA: 0x2211444 Offset: 0x220D444 VA: 0x2211444
	public static void LevelBegin(int aseq, int level, string configId) { }

	// RVA: 0x2213084 Offset: 0x220F084 VA: 0x2213084
	public static string LevelFinish(string result, string loseBy) { }

	// RVA: 0x2214DB8 Offset: 0x2210DB8 VA: 0x2214DB8
	public static string LevelSnapshot(bool external) { }

	// RVA: 0x2215444 Offset: 0x2211444 VA: 0x2215444
	public static bool SnapshotChanged() { }

	// RVA: 0x221BDB4 Offset: 0x2217DB4 VA: 0x221BDB4
	public static void OnTap(StageEngine e, int truckId, List<SimEvent> evts) { }

	// RVA: 0x221BF34 Offset: 0x2217F34 VA: 0x221BF34
	public static void NextTapIsAuto() { }

	// RVA: 0x221BF94 Offset: 0x2217F94 VA: 0x221BF94
	private static void OnMiss(Vector2 screen) { }

	// RVA: 0x221C290 Offset: 0x2218290 VA: 0x221C290
	public static void OnHint(StageEngine e, int truckId) { }

	// RVA: 0x221C4BC Offset: 0x22184BC VA: 0x221C4BC
	public static void Boost(StageEngine e, int itemId, int action, long arg = -1) { }

	// RVA: 0x221C778 Offset: 0x2218778 VA: 0x221C778
	public static void Pause(StageEngine e) { }

	// RVA: 0x221C8F8 Offset: 0x22188F8 VA: 0x221C8F8
	public static void JamHold(StageEngine e, bool held) { }

	// RVA: 0x221CA88 Offset: 0x2218A88 VA: 0x221CA88
	public static void JamReset(StageEngine e) { }

	// RVA: 0x221CC08 Offset: 0x2218C08 VA: 0x221CC08
	public static void ReviveOffer(StageEngine e) { }

	// RVA: 0x2219B14 Offset: 0x2215B14 VA: 0x2219B14
	public static void NoteContinue(string action) { }

	// RVA: 0x221CD9C Offset: 0x2218D9C VA: 0x221CD9C
	public static void Revive(StageEngine e, int buses, float seconds) { }

	// RVA: 0x221CF50 Offset: 0x2218F50 VA: 0x221CF50
	public static void MarkForced(StageEngine e) { }

	// RVA: 0x221C6F0 Offset: 0x22186F0 VA: 0x221C6F0
	private static int Booster(int itemId) { }

	// RVA: 0x221BD0C Offset: 0x2217D0C VA: 0x221BD0C
	private static int Count(int id) { }

	// RVA: 0x221BC24 Offset: 0x2217C24 VA: 0x221BC24
	private static bool RewardedReady() { }

	// RVA: 0x221BB50 Offset: 0x2217B50 VA: 0x221BB50
	public static uint ConfigHash(string configId) { }

	// RVA: 0x221D080 Offset: 0x2219080 VA: 0x221D080
	private static void OnOpened(UIPanel p) { }

	// RVA: 0x221D3A0 Offset: 0x22193A0 VA: 0x221D3A0
	private static void OnClosed(UIPanel p) { }

	// RVA: 0x221D4E8 Offset: 0x22194E8 VA: 0x221D4E8
	private static void OnBack(UIPanel p) { }

	// RVA: 0x221D630 Offset: 0x2219630 VA: 0x221D630
	private static void OnClicked(GameObject go) { }

	// RVA: 0x221D814 Offset: 0x2219814 VA: 0x221D814
	private static bool get_UiOn() { }

	// RVA: 0x221D8DC Offset: 0x22198DC VA: 0x221D8DC
	private static void EnsureUi() { }

	// RVA: 0x221D1C8 Offset: 0x22191C8 VA: 0x221D1C8
	private static void UiNamed(int op, string a, string b) { }

	// RVA: 0x22149D0 Offset: 0x22109D0 VA: 0x22149D0
	public static void UiMark(int kind, long a = 0, long b = 0, string name) { }

	// RVA: 0x22119A0 Offset: 0x220D9A0 VA: 0x22119A0
	public static void PersistUi() { }

	// RVA: 0x22154D4 Offset: 0x22114D4 VA: 0x22154D4
	public static void AppPause(bool external) { }

	// RVA: 0x221DAC8 Offset: 0x2219AC8 VA: 0x221DAC8
	private static void FlushUi(int endBy) { }

	// RVA: 0x221B8EC Offset: 0x22178EC VA: 0x221B8EC
	private static void SendUi(string uj) { }

	// RVA: 0x221DC9C Offset: 0x2219C9C VA: 0x221DC9C
	private static void .cctor() { }
}

