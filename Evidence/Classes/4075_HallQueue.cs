// Namespace: Dino.BusSand.App.Meta
public class HallQueue // TypeDefIndex: 4075
{
	// Fields
	private readonly List<HallQueue.Cmd> _cmds; // 0x10
	private int _seq; // 0x18

	// Properties
	public int Count { get; }
	public IReadOnlyList<HallQueue.Cmd> Commands { get; }

	// Methods

	// RVA: 0x222CA74 Offset: 0x2228A74 VA: 0x222CA74
	public void Add(int priority, string name, Func<IEnumerator> run) { }

	// RVA: 0x2240760 Offset: 0x223C760 VA: 0x2240760
	public int get_Count() { }

	// RVA: 0x22407A8 Offset: 0x223C7A8 VA: 0x22407A8
	public IReadOnlyList<HallQueue.Cmd> get_Commands() { }

	[IteratorStateMachine(typeof(HallQueue.<RunAll>d__8))]
	// RVA: 0x22407B0 Offset: 0x223C7B0 VA: 0x22407B0
	public IEnumerator RunAll() { }

	// RVA: 0x2240824 Offset: 0x223C824 VA: 0x2240824
	public void .ctor() { }
}

