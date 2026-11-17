// Namespace: Dino.BusSand.App.UI
public class YachtRacingRewardPanel : UIPanel // TypeDefIndex: 3922
{
	// Fields
	private const string OverClip = "Ani_UIYachtRacingReward_PortraitBg_c";
	private YachtRacingRewardPanel.Param _p; // 0x38
	private YachtRacingCore _c; // 0x40
	private int _stage; // 0x48
	private readonly List<RectTransform> _items; // 0x50
	private readonly List<RectTransform> _targets; // 0x58
	private readonly List<ActivityRewardEntry> _rewards; // 0x60
	private bool _canClaim; // 0x68
	private bool _claiming; // 0x69
	private bool _closed; // 0x6A

	// Methods

	// RVA: 0x21EF454 Offset: 0x21EB454 VA: 0x21EF454 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21EFAC4 Offset: 0x21EBAC4 VA: 0x21EFAC4 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21EFB24 Offset: 0x21EBB24 VA: 0x21EFB24 Slot: 6
	public override void OnClose() { }

	// RVA: 0x21EF7E8 Offset: 0x21EB7E8 VA: 0x21EF7E8
	private void InitUI() { }

	[IteratorStateMachine(typeof(YachtRacingRewardPanel.<PlayLater>d__15))]
	// RVA: 0x21EF9DC Offset: 0x21EB9DC VA: 0x21EF9DC
	private IEnumerator PlayLater(float delay, string sfx) { }

	[IteratorStateMachine(typeof(YachtRacingRewardPanel.<WaitAnimComplete>d__16))]
	// RVA: 0x21EFA58 Offset: 0x21EBA58 VA: 0x21EFA58
	private IEnumerator WaitAnimComplete() { }

	[IteratorStateMachine(typeof(YachtRacingRewardPanel.<InitReward>d__17))]
	// RVA: 0x21EFB8C Offset: 0x21EBB8C VA: 0x21EFB8C
	private IEnumerator InitReward() { }

	// RVA: 0x21EFC70 Offset: 0x21EBC70 VA: 0x21EFC70
	private static void SetReward(RectTransform item, ActivityRewardEntry e) { }

	// RVA: 0x21EFF48 Offset: 0x21EBF48 VA: 0x21EFF48
	private void PlayRewardAnim() { }

	[IteratorStateMachine(typeof(YachtRacingRewardPanel.<MoveItem>d__20))]
	// RVA: 0x21F00C8 Offset: 0x21EC0C8 VA: 0x21F00C8
	private IEnumerator MoveItem(RectTransform item, RectTransform target, float delay) { }

	[IteratorStateMachine(typeof(YachtRacingRewardPanel.<FadeItem>d__21))]
	// RVA: 0x21F0188 Offset: 0x21EC188 VA: 0x21F0188
	private IEnumerator FadeItem(RectTransform item) { }

	// RVA: 0x21EFAD8 Offset: 0x21EBAD8 VA: 0x21EFAD8
	private void OnClickClose() { }

	[IteratorStateMachine(typeof(YachtRacingRewardPanel.<Claim>d__23))]
	// RVA: 0x21F021C Offset: 0x21EC21C VA: 0x21F021C
	private IEnumerator Claim() { }

	// RVA: 0x21F02B0 Offset: 0x21EC2B0 VA: 0x21F02B0
	private void Finish() { }

	// RVA: 0x21F0370 Offset: 0x21EC370 VA: 0x21F0370
	public void .ctor() { }
}

