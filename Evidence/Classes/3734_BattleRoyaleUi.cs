// Namespace: Dino.BusSand.App.UI
public static class BattleRoyaleUi // TypeDefIndex: 3734
{
	// Properties
	public static int MyHeadId { get; }
	public static BattleRoyaleFeature Feature { get; }
	public static BattleRoyaleCore Core { get; }

	// Methods

	// RVA: 0x219BD74 Offset: 0x2197D74 VA: 0x219BD74
	public static int get_MyHeadId() { }

	// RVA: 0x219BDC4 Offset: 0x2197DC4 VA: 0x219BDC4
	public static BattleRoyaleFeature get_Feature() { }

	// RVA: 0x2199BB0 Offset: 0x2195BB0 VA: 0x2199BB0
	public static BattleRoyaleCore get_Core() { }

	// RVA: 0x219BDCC Offset: 0x2197DCC VA: 0x219BDCC
	public static void OpenMain(Action onClose) { }

	// RVA: 0x219C078 Offset: 0x2198078 VA: 0x219C078
	public static void OpenGuide(Action onClose) { }

	// RVA: 0x219C284 Offset: 0x2198284 VA: 0x219C284
	public static void OpenSpecialLose(Action done) { }

	[IteratorStateMachine(typeof(BattleRoyaleUi.<RunSpecialWin>d__9))]
	// RVA: 0x219C4D4 Offset: 0x21984D4 VA: 0x219C4D4
	public static IEnumerator RunSpecialWin() { }

	[IteratorStateMachine(typeof(BattleRoyaleUi.<RunStart>d__10))]
	// RVA: 0x219C554 Offset: 0x2198554 VA: 0x219C554
	public static IEnumerator RunStart(bool autoShow) { }

	// RVA: 0x219C5E0 Offset: 0x21985E0 VA: 0x219C5E0
	public static void OpenStart(bool locked, Action onClose) { }

	// RVA: 0x219BFB4 Offset: 0x2197FB4 VA: 0x219BFB4
	public static void CloseScene() { }

	// RVA: 0x219A108 Offset: 0x2196108 VA: 0x219A108
	public static void SetTexts(Transform node, string text) { }

	// RVA: 0x219A060 Offset: 0x2196060 VA: 0x219A060
	public static string L(string key, object[] args) { }

	// RVA: 0x2199BE4 Offset: 0x2195BE4 VA: 0x2199BE4
	public static void ApplyKeys(Transform root, string[] pathKeyPairs) { }

	// RVA: 0x219C760 Offset: 0x2198760 VA: 0x219C760
	public static Transform Resolve(Transform root, string path) { }

	// RVA: 0x219A5E8 Offset: 0x21965E8 VA: 0x219A5E8
	public static void SetActive(Transform t, bool on) { }

	// RVA: 0x219B820 Offset: 0x2197820 VA: 0x219B820
	public static string Amount(long v) { }

	// RVA: 0x219C878 Offset: 0x2198878 VA: 0x219C878
	public static Sprite HeadSprite(int headId) { }

	// RVA: 0x219C98C Offset: 0x219898C VA: 0x219C98C
	public static void SetHead(Transform item, BattleRoyalePerson info) { }

	// RVA: 0x219CCF8 Offset: 0x2198CF8 VA: 0x219CCF8
	public static Transform SpawnHead(Transform template, Transform slot) { }

	// RVA: 0x219A580 Offset: 0x2196580 VA: 0x219A580
	public static float Play(Animation a, string clip) { }

	// RVA: 0x219CF34 Offset: 0x2198F34 VA: 0x219CF34
	public static void Sample(Animation anim, string clip, bool last) { }

	// RVA: 0x219D0E4 Offset: 0x21990E4 VA: 0x219D0E4
	public static float OutBack(float t) { }

	// RVA: 0x219D130 Offset: 0x2199130 VA: 0x219D130
	public static float InBack(float t) { }

	// RVA: 0x219D178 Offset: 0x2199178 VA: 0x219D178
	public static float OutQuad(float t) { }

	// RVA: 0x219D19C Offset: 0x219919C VA: 0x219D19C
	public static float OutCubic(float t) { }

	// RVA: 0x219D1C4 Offset: 0x21991C4 VA: 0x219D1C4
	public static float InOutCubic(float t) { }

	[IteratorStateMachine(typeof(BattleRoyaleUi.<Punch>d__29))]
	// RVA: 0x219D230 Offset: 0x2199230 VA: 0x219D230
	public static IEnumerator Punch(Transform t, float s, float half) { }

	[IteratorStateMachine(typeof(BattleRoyaleUi.<CountNumber>d__30))]
	// RVA: 0x219D2D8 Offset: 0x21992D8 VA: 0x219D2D8
	public static IEnumerator CountNumber(Transform textNode, int from, int to, float delay, float duration, bool tick) { }

	// RVA: 0x219D3AC Offset: 0x21993AC VA: 0x219D3AC
	public static List<KeyValuePair<int, long>> FirstReward(BattleRoyaleCore core) { }
}

