// Namespace: Dino.BusSand.App.UI
public class PassportFinishGetPanel : UIPanel // TypeDefIndex: 3849
{
	// Fields
	private const float CellW = 290;
	private const float CellH = 236;
	private const float SpacingX = 36;
	private const float SpacingY = 84;
	private const int Columns = 3;
	private Action _onClose; // 0x38
	private bool _playing; // 0x40
	private bool _done; // 0x41
	private readonly List<Transform> _items; // 0x48

	// Methods

	// RVA: 0x21CFDB8 Offset: 0x21CBDB8 VA: 0x21CFDB8 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x21D0248 Offset: 0x21CC248 VA: 0x21D0248
	private void Build(List<PassportFeature.Reward> rewards) { }

	// RVA: 0x21D0780 Offset: 0x21CC780 VA: 0x21D0780
	private static void SetItem(Transform t, PassportFeature.Reward r) { }

	[IteratorStateMachine(typeof(PassportFinishGetPanel.<Sequence>d__12))]
	// RVA: 0x21D0714 Offset: 0x21CC714 VA: 0x21D0714
	private IEnumerator Sequence() { }

	// RVA: 0x21D0C40 Offset: 0x21CCC40 VA: 0x21D0C40 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21D0C54 Offset: 0x21CCC54 VA: 0x21D0C54
	private void OnTap() { }

	[IteratorStateMachine(typeof(PassportFinishGetPanel.<CloseRoutine>d__15))]
	// RVA: 0x21D0C98 Offset: 0x21CCC98 VA: 0x21D0C98
	private IEnumerator CloseRoutine() { }

	// RVA: 0x21D0D2C Offset: 0x21CCD2C VA: 0x21D0D2C
	public void .ctor() { }
}

