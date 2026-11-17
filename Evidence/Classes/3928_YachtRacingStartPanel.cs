// Namespace: Dino.BusSand.App.UI
public class YachtRacingStartPanel : UIPanel // TypeDefIndex: 3928
{
	// Fields
	private static readonly string[] StageNodes; // 0x0
	private YachtRacingStartPanel.Param _p; // 0x38
	private YachtRacingCore _c; // 0x40
	private int _currentStage; // 0x48
	private YachtRacingRewardTips _tips; // 0x50
	private RectTransform _root; // 0x58
	private bool _starting; // 0x60
	private bool _finished; // 0x61

	// Methods

	// RVA: 0x21F28C8 Offset: 0x21EE8C8 VA: 0x21F28C8 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21F3288 Offset: 0x21EF288 VA: 0x21F3288 Slot: 6
	public override void OnClose() { }

	// RVA: 0x21F32D8 Offset: 0x21EF2D8 VA: 0x21F32D8 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21F2D58 Offset: 0x21EED58 VA: 0x21F2D58
	private void RefreshStage() { }

	// RVA: 0x21F3370 Offset: 0x21EF370 VA: 0x21F3370
	private static void SetStageButton(Transform btn, int stage, bool passed) { }

	// RVA: 0x21F3508 Offset: 0x21EF508 VA: 0x21F3508
	private void OnStageClick(int stage, RectTransform btnRect) { }

	// RVA: 0x21F3754 Offset: 0x21EF754 VA: 0x21F3754
	private void OnStartClick() { }

	[IteratorStateMachine(typeof(YachtRacingStartPanel.<StartFlow>d__16))]
	// RVA: 0x21F38E0 Offset: 0x21EF8E0 VA: 0x21F38E0
	private IEnumerator StartFlow(List<object> first) { }

	// RVA: 0x21F3970 Offset: 0x21EF970 VA: 0x21F3970
	private void OpenRaceAndClose() { }

	// RVA: 0x21F32EC Offset: 0x21EF2EC VA: 0x21F32EC
	private void OnCloseClick() { }

	// RVA: 0x21F39E4 Offset: 0x21EF9E4 VA: 0x21F39E4
	public void .ctor() { }

	// RVA: 0x21F39EC Offset: 0x21EF9EC VA: 0x21F39EC
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x21F3B04 Offset: 0x21EFB04 VA: 0x21F3B04
	private void <OnOpen>b__9_0() { }
}

