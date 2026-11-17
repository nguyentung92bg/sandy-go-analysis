// Namespace: Dino.BusSand.App.UI
public class BonusBankOpenPanel : UIPanel // TypeDefIndex: 3838
{
	// Fields
	private Action _onClose; // 0x38
	private Animator _anim; // 0x40
	private int _state; // 0x48
	private long _coins; // 0x50

	// Methods

	// RVA: 0x21CBA30 Offset: 0x21C7A30 VA: 0x21CBA30 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21CBF28 Offset: 0x21C7F28 VA: 0x21CBF28
	private void SetState(int s) { }

	// RVA: 0x21CC014 Offset: 0x21C8014 VA: 0x21CC014 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21CC028 Offset: 0x21C8028 VA: 0x21CC028
	private void OnTap() { }

	[IteratorStateMachine(typeof(BonusBankOpenPanel.<Claim>d__8))]
	// RVA: 0x21CC080 Offset: 0x21C8080 VA: 0x21CC080
	private IEnumerator Claim() { }

	[IteratorStateMachine(typeof(BonusBankOpenPanel.<Finish>d__9))]
	// RVA: 0x21CC0EC Offset: 0x21C80EC VA: 0x21CC0EC
	private IEnumerator Finish() { }

	// RVA: 0x21CC1A8 Offset: 0x21C81A8 VA: 0x21CC1A8
	public void .ctor() { }
}

