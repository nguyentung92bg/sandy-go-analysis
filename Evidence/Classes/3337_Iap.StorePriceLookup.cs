// Namespace: 
public sealed class Iap.StorePriceLookup : MulticastDelegate // TypeDefIndex: 3337
{
	// Methods

	// RVA: 0x217C5A8 Offset: 0x21785A8 VA: 0x217C5A8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x217C65C Offset: 0x217865C VA: 0x217C65C Slot: 13
	public virtual bool Invoke(string productId, out double price, out string isoCurrency) { }

	// RVA: 0x217C670 Offset: 0x2178670 VA: 0x217C670 Slot: 14
	public virtual IAsyncResult BeginInvoke(string productId, out double price, out string isoCurrency, AsyncCallback callback, object object) { }

	// RVA: 0x217C6E0 Offset: 0x21786E0 VA: 0x217C6E0 Slot: 15
	public virtual bool EndInvoke(out double price, out string isoCurrency, IAsyncResult result) { }
}

