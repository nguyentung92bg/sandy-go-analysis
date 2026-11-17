// Namespace: Dino.BusSand.App.UI
public class BattleRoyaleScenePanel : UIPanel // TypeDefIndex: 3720
{
	// Fields
	private const float JumpInitialDelay = 0.5;
	private const float FirstDelayMin = 0;
	private const float FirstDelayMax = 1;
	private const float SubDelayMin = 0.02;
	private const float SubMaxBase = 0.15;
	private const float SubDecay = 0.015;
	private const float SubMinCap = 0.03;
	private const float BounceX = 20;
	private const float BounceArc = 40;
	private const float BounceDur = 0.3;
	private const float FlyDur = 0.9;
	private const float ArcRatio = 0.4;
	private const float LandRotate = 0.06;
	private const float LandRecover = 0.08;
	private const float LoseDelayGap = 1.1;
	private const float LoseIntervalMin = 0.01;
	private const float LoseIntervalMax = 0.04;
	private const float ShakeX = 5;
	private const float ShakeSingle = 0.03;
	private const float ShakeCount = 17;
	private const float FallDistance = 2000;
	private const float FallDur = 0.45;
	private const float GuideDelay = 0.5;
	private const float GuideMove = 2.5;
	private BattleRoyaleScenePanel.Param _p; // 0x38
	private BattleRoyaleCore _core; // 0x40
	private ScrollRect _scroll; // 0x48
	private Transform _menTemplate; // 0x50
	private Transform _players; // 0x58
	private Transform _guideTips; // 0x60
	private readonly List<Transform> _walls; // 0x68
	private readonly List<Transform> _men; // 0x70
	private Transform _bottomMen; // 0x78
	private readonly List<Transform> _live; // 0x80
	private readonly List<BattleRoyalePerson> _liveInfo; // 0x88
	private readonly List<Transform> _dead; // 0x90
	private int _tipsId; // 0x98
	private bool _forbidTips; // 0x9C
	private bool _guideWaitTap; // 0x9D
	private readonly Random _rng; // 0xA0

	// Properties
	private BattleRoyalePanel Overlay { get; }

	// Methods

	// RVA: 0x2191884 Offset: 0x218D884 VA: 0x2191884 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x2192E54 Offset: 0x218EE54 VA: 0x2192E54 Slot: 6
	public override void OnClose() { }

	// RVA: 0x2192F40 Offset: 0x218EF40 VA: 0x2192F40 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x2192FD0 Offset: 0x218EFD0 VA: 0x2192FD0
	private BattleRoyalePanel get_Overlay() { }

	// RVA: 0x2191EF4 Offset: 0x218DEF4 VA: 0x2191EF4
	private void Build() { }

	// RVA: 0x21930BC Offset: 0x218F0BC VA: 0x21930BC
	private Transform NewMen(Transform itemTemplate, Transform parent) { }

	// RVA: 0x2193980 Offset: 0x218F980 VA: 0x2193980
	private int MenIndexOf(Transform gate) { }

	// RVA: 0x2193A88 Offset: 0x218FA88 VA: 0x2193A88
	private static Transform GateOf(Transform item) { }

	// RVA: 0x2193614 Offset: 0x218F614 VA: 0x2193614
	private void SetMenIndex(Transform item, int index, bool locked) { }

	// RVA: 0x2193B1C Offset: 0x218FB1C VA: 0x2193B1C
	private static void SetMenLock(Transform gate, bool locked) { }

	// RVA: 0x2192C24 Offset: 0x218EC24 VA: 0x2192C24
	private void Refresh() { }

	// RVA: 0x21941CC Offset: 0x21901CC VA: 0x21941CC
	private void SetCommon(List<BattleRoyalePerson> infos) { }

	// RVA: 0x2194570 Offset: 0x2190570 VA: 0x2194570
	private void SetDead(List<BattleRoyalePerson> infos) { }

	// RVA: 0x2193BD0 Offset: 0x218FBD0 VA: 0x2193BD0
	private void DeduplicateHeads(List<BattleRoyalePerson> infos) { }

	// RVA: 0x2194698 Offset: 0x2190698 VA: 0x2194698
	private void InitPlayerPositions() { }

	// RVA: 0x21948A8 Offset: 0x21908A8 VA: 0x21948A8
	private void RefreshPositions(bool mirror) { }

	// RVA: 0x2194C94 Offset: 0x2190C94 VA: 0x2194C94
	private void RefreshReward() { }

	// RVA: 0x2194E38 Offset: 0x2190E38 VA: 0x2194E38
	private void RefreshDecoration() { }

	// RVA: 0x2195140 Offset: 0x2191140 VA: 0x2195140
	private float MaxScroll() { }

	// RVA: 0x219529C Offset: 0x219129C VA: 0x219529C
	private float NormalizedFor(RectTransform target, float offset) { }

	// RVA: 0x2194B40 Offset: 0x2190B40 VA: 0x2194B40
	private void ResetPositionToPlayer() { }

	// RVA: 0x2195460 Offset: 0x2191460 VA: 0x2195460
	private void OnScrolled(Vector2 v) { }

	// RVA: 0x2195550 Offset: 0x2191550 VA: 0x2195550
	private void OnTopRewardClicked() { }

	// RVA: 0x2195C64 Offset: 0x2191C64 VA: 0x2195C64
	private void OnMenIndexClicked(int index) { }

	// RVA: 0x21956FC Offset: 0x21916FC VA: 0x21956FC
	private void ShowTips(int id, Transform target, Vector3 offset, string text, bool above, float width, bool force = False) { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<PopIn>d__67))]
	// RVA: 0x2196040 Offset: 0x2192040 VA: 0x2196040
	private static IEnumerator PopIn(Transform t) { }

	// RVA: 0x218DFA8 Offset: 0x2189FA8 VA: 0x218DFA8
	public void HideTips() { }

	// RVA: 0x21960D4 Offset: 0x21920D4 VA: 0x21960D4
	private void OnTipMask() { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<GuideRoutine>d__70))]
	// RVA: 0x2194FFC Offset: 0x2190FFC VA: 0x2194FFC
	private IEnumerator GuideRoutine() { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<GuideStep>d__71))]
	// RVA: 0x2196100 Offset: 0x2192100 VA: 0x2196100
	private IEnumerator GuideStep(Transform target, Vector3 offset, string text, bool above) { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<WaitTap>d__72))]
	// RVA: 0x21961FC Offset: 0x21921FC VA: 0x21961FC
	private IEnumerator WaitTap() { }

	// RVA: 0x2196290 Offset: 0x2192290 VA: 0x2196290
	private void FinishGuide() { }

	// RVA: 0x219631C Offset: 0x219231C VA: 0x219631C
	private Vector3 JumpTarget(Transform head, bool final) { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<WinAnimation>d__75))]
	// RVA: 0x21950D4 Offset: 0x21910D4 VA: 0x21950D4
	private IEnumerator WinAnimation() { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<LoseAnimation>d__76))]
	// RVA: 0x2195068 Offset: 0x2191068 VA: 0x2195068
	private IEnumerator LoseAnimation() { }

	// RVA: 0x2196448 Offset: 0x2192448 VA: 0x2196448
	private float Rand(float a, float b) { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<PlaySfx>d__78))]
	// RVA: 0x2196498 Offset: 0x2192498 VA: 0x2196498
	private static IEnumerator PlaySfx(string id, float delay) { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<MenFall>d__79))]
	// RVA: 0x219653C Offset: 0x219253C VA: 0x219653C
	private IEnumerator MenFall(float delay) { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<Jump>d__80))]
	// RVA: 0x21965E0 Offset: 0x21925E0 VA: 0x21965E0
	private IEnumerator Jump(Transform t, float delay, Vector3 target) { }

	// RVA: 0x21966A0 Offset: 0x21926A0 VA: 0x21966A0
	private float Fall(Transform t, float delay) { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<FallRoutine>d__82))]
	// RVA: 0x21966E8 Offset: 0x21926E8 VA: 0x21966E8
	private IEnumerator FallRoutine(Transform t, float delay) { }

	// RVA: 0x219678C Offset: 0x219278C VA: 0x219678C
	private static float InOutQuad(float t) { }

	[IteratorStateMachine(typeof(BattleRoyaleScenePanel.<ScaleTo>d__84))]
	// RVA: 0x21967D4 Offset: 0x21927D4 VA: 0x21967D4
	private static IEnumerator ScaleTo(Transform t, float sx, float d, float sy = -1, Vector3 baseScale) { }

	// RVA: 0x21968A4 Offset: 0x21928A4 VA: 0x21968A4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2196A2C Offset: 0x2192A2C VA: 0x2196A2C
	private void <OnOpen>b__41_0() { }

	[CompilerGenerated]
	// RVA: 0x2196A34 Offset: 0x2192A34 VA: 0x2196A34
	private void <OnOpen>b__41_1() { }
}

