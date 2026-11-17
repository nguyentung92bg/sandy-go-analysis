// Namespace: Dino.BusSand.Core
[IsReadOnly]
[DefaultMember("Item")]
public struct ListView<T> : IEnumerable<T>, IEnumerable // TypeDefIndex: 8544
{
	// Fields
	private readonly List<T> _list; // 0x0

	// Properties
	public int Count { get; }
	public T Item { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(List<T> list) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x39558D8 Offset: 0x39518D8 VA: 0x39558D8
	|-ListView<object>..ctor
	|
	|-RVA: 0x3955AC0 Offset: 0x3951AC0 VA: 0x3955AC0
	|-ListView<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public int get_Count() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x39558E0 Offset: 0x39518E0 VA: 0x39558E0
	|-ListView<object>.get_Count
	|
	|-RVA: 0x3955AC8 Offset: 0x3951AC8 VA: 0x3955AC8
	|-ListView<__Il2CppFullySharedGenericType>.get_Count
	*/

	// RVA: -1 Offset: -1
	public T get_Item(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3955910 Offset: 0x3951910 VA: 0x3955910
	|-ListView<object>.get_Item
	|
	|-RVA: 0x3955B48 Offset: 0x3951B48 VA: 0x3955B48
	|-ListView<__Il2CppFullySharedGenericType>.get_Item
	*/

	// RVA: -1 Offset: -1
	public List.Enumerator<T> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3955958 Offset: 0x3951958 VA: 0x3955958
	|-ListView<object>.GetEnumerator
	|
	|-RVA: 0x3955C8C Offset: 0x3951C8C VA: 0x3955C8C
	|-ListView<__Il2CppFullySharedGenericType>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 4
	private IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x39559B8 Offset: 0x39519B8 VA: 0x39559B8
	|-ListView<object>.System.Collections.Generic.IEnumerable<T>.GetEnumerator
	|
	|-RVA: 0x3955DBC Offset: 0x3951DBC VA: 0x3955DBC
	|-ListView<__Il2CppFullySharedGenericType>.System.Collections.Generic.IEnumerable<T>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x3955A3C Offset: 0x3951A3C VA: 0x3955A3C
	|-ListView<object>.System.Collections.IEnumerable.GetEnumerator
	|
	|-RVA: 0x3955EFC Offset: 0x3951EFC VA: 0x3955EFC
	|-ListView<__Il2CppFullySharedGenericType>.System.Collections.IEnumerable.GetEnumerator
	*/
}

