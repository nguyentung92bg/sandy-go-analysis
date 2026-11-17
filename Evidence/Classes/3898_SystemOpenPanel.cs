// Namespace: Dino.BusSand.App.UI
public class SystemOpenPanel : UIPanel // TypeDefIndex: 3898
{
	// Fields
	private SystemOpenPanel.Param _p; // 0x38
	private GameObject _clone; // 0x40
	private bool _closing; // 0x48

	// Methods

	// RVA: 0x21E69F4 Offset: 0x21E29F4 VA: 0x21E69F4
	public static SystemOpenPanel Open(int id, GameObject copy, bool mirror, bool markGuided, Action callback) { }

	// RVA: 0x21E6C3C Offset: 0x21E2C3C VA: 0x21E6C3C Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21E737C Offset: 0x21E337C VA: 0x21E737C
	private void ApplyArrowMirror(bool mirror) { }

	// RVA: 0x21E7560 Offset: 0x21E3560 VA: 0x21E7560
	private void OnCloseClick() { }

	[IteratorStateMachine(typeof(SystemOpenPanel.<CloseAfterDelay>d__8))]
	// RVA: 0x21E758C Offset: 0x21E358C VA: 0x21E758C
	private IEnumerator CloseAfterDelay() { }

	// RVA: 0x21E7620 Offset: 0x21E3620 VA: 0x21E7620
	private void RestoreCopy() { }

	// RVA: 0x21E77A8 Offset: 0x21E37A8 VA: 0x21E77A8 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21E77B0 Offset: 0x21E37B0 VA: 0x21E77B0 Slot: 6
	public override void OnClose() { }

	// RVA: 0x21E77B4 Offset: 0x21E37B4 VA: 0x21E77B4
	public void .ctor() { }
}

